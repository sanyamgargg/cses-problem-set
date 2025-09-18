#include<bits/stdc++.h>
using namespace std;

typedef long long ll ;

inline ll mod(ll a, ll n){
    return (a%n + n ) % n ;
}
 
int main(){
    int n ;
    cin>>n;
 
    vector<ll> a(n) ;
    for(int i = 0 ; i < n ; i++) cin>>a[i] ;
    
    vector<ll> mp(n,0) ;
    mp[0] = 1 ;
    ll sum = 0 , count = 0 ;
    
    for(int i = 0 ; i < n ; i++){
        sum += a[i] ;
        ll rem = mod(sum,n) ;
        count += mp[rem] ;
        mp[rem]++ ;
    }
     cout<<count ;
 
 
 
return 0;
}
