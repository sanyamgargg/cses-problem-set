#include <bits/stdc++.h>
using namespace std;

vector<string> grayCode(int n){
    if(n == 1) return {"0","1"} ;

    vector<string> a = grayCode(n-1) ;
    vector<string> b = a ;
    reverse(b.begin(),b.end()) ;
    for(int i = 0; i < a.size() ; i++){
        a[i] += "0" ;
        b[i] += "1" ; 
    }
    a.insert(a.end() , b.begin() ,b.end()) ;
    return a ;
}

int main(){

    int n ;
    cin>>n ;
    vector<string> ans = grayCode(n) ;
    for(string s: ans){
        cout<<s<<"\n" ;
    }

return 0;
}