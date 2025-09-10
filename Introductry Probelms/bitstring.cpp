#include<iostream>
using namespace std;

int main(){
    int mod = 1e9+7 ;
    int n ;
    cin>>n ;
    int ans = 1 ;
    while(n--){
        ans = (ans*2) % mod ;
    }

    cout<<ans ;


return 0;
}