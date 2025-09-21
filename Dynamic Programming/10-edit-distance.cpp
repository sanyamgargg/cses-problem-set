#include<bits/stdc++.h>
using namespace std;
const int INF = 1e5 + 7 ;

int main(){

    string s1,s2 ;
    cin>>s1>>s2;
    int n = s1.size() , m = s2.size() ;
    vector<vector<int>> dp(n+1,vector<int>(m+1,INF)) ;

    
        for(int i = 0 ; i <= n ; i++) dp[i][m] = n-i ;
        for(int i = 0 ; i <= m ; i++) dp[n][i] = m-i ;
    


    for(int i = n-1 ; i >= 0 ; i--){
        for(int j = m-1 ; j >= 0 ; j--){
            if(s1[i] == s2[j]){
                dp[i][j] = dp[i+1][j+1] ;
            }else{
                int add = dp[i][j+1] ;
                int remove = dp[i+1][j]  ;
                int replace = dp[i+1][j+1] ;
                dp[i][j] = min(add,min(remove,replace)) + 1;
            }
        }
    }

    cout<<dp[0][0] ;

return 0;
}