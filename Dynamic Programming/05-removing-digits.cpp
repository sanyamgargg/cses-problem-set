#include<bits/stdc++.h>
using namespace std;



int main(){
    int n ;
    cin>>n ;
    vector<int> dp(n+1,INT_MAX) ; 
    dp[0] = 0 ;

    for(int i = 1 ; i <= n ; i++){
        int x = i ;
        while(x){
            int digit = x%10 ;
            x = x/10 ;

            if(i - digit >= 0 && dp[i-digit] < INT_MAX){
                dp[i] = min(dp[i],dp[i-digit] + 1) ;
            }
        }
    }

    cout<<dp[n] ;
    

return 0;
}