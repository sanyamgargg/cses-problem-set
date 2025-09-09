#include<iostream>
using namespace std;

int main(){

    int n ;
    cin>>n ;
    int l ;
    if(n%2 == 1) l = n/2 ;
    else l = n/2 + 1 ;
    for(int i = 1 ; i <= n/2+1 ; i++){
        cout<<i<<" " ;
        cout<<i + l<<" " ;
    
    }

return 0;
}