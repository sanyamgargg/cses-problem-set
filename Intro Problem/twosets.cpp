#include<bits/stdc++.h>

using namespace std;

int main(){
    int n ;
    cin>>n ;
    if(n == 1){
        cout<<"NO" ;
        return 0 ;
    }

    // long long total = n*(n+1)/2 ;
    // if(total % 2 == 1){
    //     cout<<"NO" ;
    //     return 0 ;
    // }
    long long half1 = 0, half2 = 0;
    vector<int> h1,h2 ;
    for(int i = n ; i >= 1 ; --i){
        if(half1 > half2){
            h2.push_back(i) ;
            half2 += (long long)i ;
        }else{
            h1.push_back(i) ;
            half1 += (long long)i ;
        }
    }
   if(half1 == half2){
        cout<<"YES"<<"\n" ;
        cout<<h1.size()<<"\n" ;
        for(int num : h1){
            cout<<num<<" " ;
        }
        cout<<endl;
        cout<<h2.size()<<"\n"; ;
        for(int num : h2){
            cout<<num<<" " ;
        }
   }else{
        cout<<"NO" ;
   }
    


return 0;
}   