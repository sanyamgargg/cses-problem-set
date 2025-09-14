#include<bits/stdc++.h>
using namespace std;

int main(){
    int n ;
    cin>>n ;

    vector<vector<int>> grid(n,vector<int>(n,0)) ;
    for(int i = 0 ; i < n ; i++){
        for(int j = 0 ; j < n ; j++){
            set<int> s ;
            int x = i-1 , y = j-1 ;
            while(x >= 0){
                s.insert(grid[x][j]) ;
                x-- ;
            }
             while(y>=0){
                s.insert(grid[i][y]) ;
                y-- ;
            }

            for(int num = 0 ; true ; num++){
                if(s.find(num) == s.end()){
                    grid[i][j] = num ;
                    break ;
                }
            }
        }
    }

    for(int i = 0 ; i< n ; i++){
        for(int j = 0 ; j < n ; j++){
            cout<<grid[i][j]<<" " ;
        }
        cout<<"\n" ;
    }


return 0;
}