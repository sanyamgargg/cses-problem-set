#include<iostream>
using namespace std;

int main(){
    int n ;
    cin>>n ;
    int fof = 5 ;
    int ans = 0 ;
    while(fof<=n){
        ans += n/fof ;
        fof*=5 ;
    }
    cout<<ans ;


return 0;
}