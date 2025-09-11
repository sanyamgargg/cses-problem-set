#include<bits/stdc++.h>
using namespace std;
vector<int> freq(26,0) ;
vector<string> ans ;
int n ;

void solve(string s){
    if(n == s.length()){
        ans.push_back(s) ;
        return ;
    }

    for(int i = 0 ; i < 26 ; i++){
        if(freq[i] > 0){
            freq[i]-- ;
            solve(s + char(i+'a')) ;
            freq[i]++ ;
        }
    }
        
    
} ;

int main(){
    string s ;
    cin>>s ;

    n = s.length() ;
    for(char c : s){
        freq[c - 'a']++ ;
    }

    solve("") ;
    cout<<ans.size()<<"\n" ;
    for(string x : ans){
        cout<<x<<"\n" ;
    }
return 0;
}