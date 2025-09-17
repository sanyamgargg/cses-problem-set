#include<bits/stdc++.h>
using namespace std;

int main(){

    int n ;
    cin>>n ;
    vector<int> v(n,0),position(n+1,0) ;
    
    for(int i = 0 ; i < n ; i++){
       cin>>v[i] ;
       position[v[i]] = i ;
    }
    int count = 1 ;
    for(int i = 1 ; i < n ; i++){
        if(position[i] > position[i+1]) count++ ;
    }

    cout << count ;


return 0;
}