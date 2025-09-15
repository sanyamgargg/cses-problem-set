#include<bits/stdc++.h>
using namespace std;

int main(){
    int n ;
    cin>>n ;
    vector<int> songs ;
    for(int i = 0 ; i < n ; ++i){
        int x ;
        cin>>x ;
        songs.push_back(x) ;
    }
    int left = 0 ;
    int maxLen = 0 ;
    set<int> s ;
    for(int right = 0 ; right < n ; right++){
        while(s.find(songs[right]) != s.end()){
            s.erase(songs[left]) ;
            left++ ;
        }
        s.insert(songs[right]) ;
        maxLen = max(maxLen,right-left+1) ;
    }

    cout<<maxLen ;


return 0;
}