#include<bits/stdc++.h>
using namespace std;
const int MOD = 1e9 + 7 ;

int main(){
 int n , x ;
 cin >> n >> x ;

 vector<int> c(n) ;
 for(int i = 0 ; i < n ; ++i) cin >> c[i] ;

 vector<long long> dp(x+1,0) ;
    dp[0] = 1 ;

 for(int i = 0 ; i < n ; i++){
    for(int j = c[i] ; j <= x; j++){
            dp[j] = (dp[j] + dp[j - c[i]]) % MOD ;
        }
    
 }

    cout<<dp[x] ;


return 0;
}