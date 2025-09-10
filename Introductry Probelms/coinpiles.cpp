#include<bits/stdc++.h>
using namespace std;

int main(){
    int t ;
    cin>>t ;
    vector<bool> ans ;
    while(t--){
        int a,b ;
        cin>>a>>b ;
        int n = a+b ;
        
        if(n%3 == 0 && abs(a-b) <= n/3) ans.push_back(true) ;
        else ans.push_back(false) ;
    }
    for(bool val : ans){
        if(val)cout<<"YES"<<"\n" ;
        else cout<<"NO"<<"\n" ;
    }


return 0;
}