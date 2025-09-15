#include<bits/stdc++.h>
using namespace std;

int main(){
    int n ;
    cin>>n ;
    vector<int> l(n,0) ;
    for(int i = 0 ; i < n ; ++i){
        int x ;
        cin>>x ;
        l[i] = x ;
    }

    sort(l.begin(),l.end()) ;
    int mid = n/2 ;
    long long cost = 0;
    for(int i = 0 ; i < n ; i++){
        cost += (long long)abs(l[i] - l[mid]) ;
    }
    cout<<cost<<"\n" ;
    


return 0;
}