#include<bits/stdc++.h>
using namespace std;
const int MOD = 1e9 + 7 ;
void modify(int &a, int b){
    a += b ;
    if(a >= MOD){
        a -= MOD ;
    }
}

int main(){
    int n ;
    cin>>n ;

    vector<string> grid(n);
    for(string &s : grid){
        cin>>s ;
    }

    if(grid[n-1][n-1] == '*'){
        cout<<0 ;
        return 0 ;
    }
    if(grid[0][0] == '*'){
        cout<<0 ;
        return 0 ;
    }

    vector<vector<int>> dp(n,vector<int>(n,0)) ;
    dp[0][0] = 1 ;
    
    for(int i = 0 ; i < n ; i++){
        for(int j = 0 ; j < n ; j++){
            if(i-1 >= 0  && grid[i][j] != '*') modify(dp[i][j] , dp[i-1][j]) ;
            if(j-1 >= 0  && grid[i][j] != '*') modify(dp[i][j] , dp[i][j-1]) ;
        }
    }

    cout<<dp[n-1][n-1] ;


return 0;
}