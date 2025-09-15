#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,x ;
    cin>>n>>x ;
    vector<int> p(n) ;

    for(int i = 0 ; i < n ; i++){
        int x ;
        cin>>x ;
        p[i] = x ;
    }
    sort(p.begin() , p.end()) ;
    int i = 0, j = n - 1, count = 0 ;
    while(i < j){
        if(p[i]+p[j] <= x){
            count++ ;
            i++ ;
            j-- ;
        }else if(p[j] <= x){
            count++ ;
            j-- ;
        }else{
            j-- ;
        }
    }
    if(i == j){
        if(p[i] <= x) count++ ;
    }
    cout<<count ;


return 0;
}