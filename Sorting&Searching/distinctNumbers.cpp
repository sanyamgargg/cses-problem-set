#include<bits/stdc++.h>
using namespace std;

int main(){
    int n ;
    cin>>n ;
    // int count = 0 ;
    // unordered_map<int,int> mp ;
    set<int> s ;
    while(n--){
        int x ;
        cin>>x ;
        s.insert(x) ;
        // if(mp.find(x) == mp.end()){
        //     mp[x] = 1 ;
        //     count++ ;
        // }
    }
    cout<<s.size() ;


return 0;
}