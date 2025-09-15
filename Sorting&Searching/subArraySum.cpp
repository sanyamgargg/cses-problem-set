#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,x ;
    cin>>n>>x ;
    vector<int> v ;
    for(int i = 0 ; i < n ; ++i){
        int a ;
        cin>>a ;
        v.push_back(a) ;
    }

    int left = 0 , count = 0 , curSum = 0 ;
    for(int right = 0 ; right < n ; right++){
        curSum += v[right] ;
        while(curSum > x){
            curSum -= v[left] ;
            left++ ;
        }
        if(curSum == x) count++ ;
    }

    cout<<count ;

return 0;
}