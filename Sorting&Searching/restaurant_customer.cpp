#include<bits/stdc++.h>
using namespace std;

int main(){
int n ;
cin>>n ;
    vector<pair<int,int>> event ;   

for(int i = 0 ; i < n ; i++){
    int a , b ;
    cin>>a>>b ;
    event.push_back({a,1}) ;
    event.push_back({b,-1}) ;
}

int current = 0 ;
int maxi = 0 ;
sort(event.begin(),event.end()) ;
for(int i = 0 ; i < event.size() ; ++i){
    current += event[i].second ;
    maxi = max(current,maxi) ;
}
cout<<maxi ;


return 0;
}