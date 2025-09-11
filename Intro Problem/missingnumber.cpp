#include<iostream>
using namespace std;

typedef long long ll ;
int main(){
    ll n , s=0;
    cin>>n ;
    for(int i = 1 ; i < n ; ++i){
        int num ;
        cin>>num ;
        s += num ;
    }
    
    cout<<( n*(n+1)/2 - s) ;

return 0;
}