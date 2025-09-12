#include<bits/stdc++.h>
using namespace std;
vector<pair<int,int>> dirc =  {{-2,-1},{-1,-2},{-2,1},{-1,2},{2,-1},{1,-2},{2,1},{1,2}} ;

int main(){
    int n;
    cin>>n ;

    vector<vector<int>> grid(n,vector<int>(n,INT_MAX)) ;
    queue<pair<int,int>> q ;
    grid[0][0] = 0 ;
    q.push({0,0}) ;
    while(!q.empty()){
        int size = q.size() ;
        for(int i = 0 ; i < size ; i++){
            auto [row,col] = q.front() ;
            q.pop() ;
            for(auto dir : dirc){
                int dx = row + dir.first ;
                int dy = col + dir.second ;
                if(min(dx,dy) >= 0 && max(dx,dy) < n && grid[dx][dy] == INT_MAX){
                    grid[dx][dy] = grid[row][col] + 1 ;
                    q.push({dx,dy}) ;
                }
            }

        }
    }

    for(int i = 0 ; i < n ; i++){
        for( int j = 0 ; j < n ; j++){
            cout<<grid[i][j]<<" " ;
        }
        cout<<"\n" ;
    }

    


return 0;
}