#include<bits/stdc++.h>
using namespace std;
typedef long long ll ;

void solve(ll n){
   ll digitCount = 9 ;
   ll start = 1 ;
   ll length = 1 ;
   while(true){
        ll totalDigits = digitCount * length ;
        if(n <= totalDigits){
            ll skip = (n -1)/length ;
            ll rem = (n-1)%length ;
            ll num = start + skip ;
            string s = to_string(num) ;
            cout<<s[rem]<<"\n" ;
            return ;
        } 
        n -= totalDigits ;
        start*=10 ;
        digitCount*=10 ;
        length++ ;
        
   }  

  
}

int main(){
    int n ;
    cin>>n ;
    while(n--){
        ll x ;
        cin>>x ;
       solve(x) ;
    }
  
    return 0;
}