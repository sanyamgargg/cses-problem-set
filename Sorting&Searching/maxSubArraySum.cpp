#include<bits/stdc++.h>
using namespace std;

int main(){
    int n ;
    cin>>n ;
    long long sum ;
    cin>>sum ;
    long long maxSum = sum ;

    for(int i = 1; i < n ; i++){
        long long  x ;
        cin>>x ;
        sum = max(x,sum+x) ;
        maxSum = max(maxSum,sum) ;
    }
    cout<<maxSum ;

return 0;
}