#include<bits/stdc++.h>
using namespace std;

int main(){
    int n ;
    cin>>n ;
    vector<int> a(n) ;
    for(int i = 0 ; i < n ; i++) cin>>a[i] ;

    long long count = 0 ;
    int left = 0 ;
    set<int> s ;
    for(int right = 0 ; right < n ; right++ ){
        while(s.find(a[right]) != s.end()){
            s.erase(a[left]) ;
            left++ ;
        }

        s.insert(a[right]) ;
        count += (long long)(right - left + 1) ;
        
    }

    cout<<count ;



return 0;
}