#include<bits/stdc++.h>
using namespace std;
int ans = 0 ;
vector<bool> colCheck(8,0) ;
vector<bool> posDiag(15,0) ;
vector<bool> negDiag(15,0) ;
void solve(vector<string>& grid, int row){
    if(row == grid.size()){
        ans++ ;
        return ;
    }

    for(int col = 0 ; col < 8 ; col++){
        if(grid[row][col] == '.' && !colCheck[col] && !posDiag[row+col] && !negDiag[row-col+7]){
            grid[row][col] = 'Q' ;
            colCheck[col] = 1 ;
            posDiag[row+col] = 1 ;
            negDiag[row-col+7] = 1 ;
            solve(grid,row+1) ;
            colCheck[col] = 0 ;
            posDiag[row+col] = 0 ;
            negDiag[row-col+7] = 0;
            grid[row][col] = '.' ;
        }
    }

}

int main(){
    vector<string> grid(8) ;
    for(string &s : grid){
        cin>>s ;
    }
    solve(grid,0) ;
    cout<<ans ;

return 0;
}