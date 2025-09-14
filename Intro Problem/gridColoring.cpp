#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, m ;
    cin>>n>>m ;
    vector<string> grid(n);
    for(int i = 0 ; i < n ; i++){
        string s ;
        cin>>s ;
        grid[i] = s ;
    }
    for(int i = 0 ; i < n ; i++){
        for(int j = 0 ; j < m ; j++){
            set<char> s;
            s.insert(grid[i][j]) ;
            if(i-1 >= 0){
                s.insert(grid[i-1][j]) ;
            }
            if(j-1 >= 0){
                s.insert(grid[i][j-1]) ;
            }

            for(char ch = 'A' ; true ; ch++){
                if(s.find(ch) == s.end()){
                    grid[i][j] = ch ;
                    break;
                }
            }
        }

    }

    for(string &s : grid){
        cout<<s<<"\n" ;
    }
        
    


return 0;
}