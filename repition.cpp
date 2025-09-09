#include<iostream>
using namespace std;

int main(){
    string s ;
    getline(cin,s) ;
    int mx = 1 ;
    int res = 1 ;

    for(int i = 1 ; i < s.size() ; ++i){
        if(s[i] != s[i-1]) res = 1 ;
        else{
            res+=1 ;
        }
        mx = max(res,mx) ;
    }
    cout<<mx ;

return 0;
}