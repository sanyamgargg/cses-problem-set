#include<bits/stdc++.h>
using namespace std;

int main(){
    int n ;
    cin>> n ;
    int p = -1 ;
    long long ans = 0;
    while(n--){
        int x ;
        cin>>x ;
        if(x < p){
            ans += (long long)(p - x) ;
        }else{
            p = x ;
        }
        
    }

    cout<<ans ;

return 0;
}