#include<bits/stdc++.h>
using namespace std;

const int MOD = 1e9 + 7 ;

// int diceCombination(int n, vector<long long>& dp){
//     if(n < 0) return 0 ;
//     if(n == 0) return 1 ;

//     if(dp[n] != -1) return dp[n] ;

//     long long total = 0 ;
//     for(int i = 1 ; i <= 6 ; i++){
//         total = (total + diceCombination(n-i,dp)) % MOD ;
//     }
//     return dp[n] = total ;
// }

int main(){
    int n ;
    cin>>n ;
    vector<long long> dp(n+1,0) ;
    dp[0] = 1 ;
    for(int i = 0 ; i <= n ; i++){
        for(int j = 1 ; j <= 6; j++){
            if(i-j >= 0){
                dp[i] = (dp[i] + dp[i-j])%MOD ;
            }
            
        }
    }

    cout<<dp[n] ;


return 0;
}