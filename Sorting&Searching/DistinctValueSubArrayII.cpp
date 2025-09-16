#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,k ;
    cin>>n>>k ;
    vector<int> v(n);
    for(int i = 0 ; i < n ; ++i)cin>>v[i] ;
    int left = 0 ,diff = 0 ;
    long long count = 0 ;
    map<int,int> mp ;
    for(int right = 0 ; right < n ; right++){
        if(mp.find(v[right]) == mp.end()){
            diff++ ;
        }
        mp[v[right]]++ ;

        while(diff > k && left <= right){
            mp[v[left]]-- ;
            if(!mp[v[left]]){
                mp.erase(v[left]) ;
                diff-- ;
            }
            left++ ;
        }
        count += right - left + 1 ;
    }
    cout<<count ;



return 0;
}