#include<bits/stdc++.h>
using namespace std;

int main(){
    string s ;
    getline(cin,s) ;
    vector<int> freq(26) ;
    for(char ch : s){
        freq[ch - 'A']++ ;
    }

    bool check = false ;
    char mid = '#';
    string half = "";
    for(int i = 0 ; i < 26 ; ++i){
        if(freq[i] % 2 == 1){
            if(check){
                cout<<"NO SOLUTION" ;
                return 0 ;
            }else{
                mid = i + 'A' ;
                check = true ;
            }
        }
        half += string(freq[i]/2,i+'A') ;
        

    }

    cout<<half ;
    if(mid != '#')cout<<mid ;
    reverse(half.begin(),half.end()) ;
    cout<<half ;


return 0;
}