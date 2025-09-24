#include<bits/stdc++.h>
using namespace std;

int main(){
    int A, B ;
    cin>>A>>B ;
    vector<int> a(A), b(B) ;
    for(int i = 0 ; i < A ; ++i)cin>>a[i] ;
    for(int i = 0 ; i < B ; ++i)cin>>b[i] ;


    vector<vector<int>> dp(A+1,vector<int>(B+1,0)) ;
    for(int i = A-1 ; i >= 0 ; i--){
        for(int j = B-1 ; j >= 0; j--){
            if(a[i] == b[j]){
                dp[i][j] = dp[i+1][j+1] + 1 ;
            }else{
                dp[i][j] = max(dp[i+1][j],dp[i][j+1]) ;
            }
        }
    }

    cout<<dp[0][0]<<"\n" ;
    int i = 0 , j = 0 ;
    vector<int> ans ;
    while(i < A && j < B){
        if(a[i] == b[j]){
            ans.push_back(a[i]) ;
            i++ ; j++ ;
        }else if(dp[i+1][j] >= dp[i][j+1]){
            i++ ;
        }else{
            j++ ;
        }
    }

    for(int x : ans){
        cout<<x<<" " ;
    }

return 0;
}