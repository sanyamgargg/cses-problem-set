#include<bits/stdc++.h>
using namespace std;

bool comp(int a, int b){
    return a > b ;
}

int main(){
    int n,m,k ;
    cin>>n>>m>>k ;
    vector<int> a , b;
    for(int i = 0 ; i < n ; i++){
        int x ;
        cin>>x ;
        a.push_back(x) ;
    }
    for(int i = 0 ; i < m ; i++){
        int x ;
        cin>>x ;
        b.push_back(x) ;
    }

    sort(a.begin(), a.end(),comp) ;
    sort(b.begin(), b.end(),comp) ;

    int i = 0 , j = 0 ,count = 0;
    while(i < a.size() && j < b.size()){
        if(b[j] <= a[i] + k && b[j] >= a[i] - k){
            count++ ;
            i++ ;
            j++ ;
        }else if(b[j] > a[i]+k){
            j++ ;
        }else{
            i++ ;
        }
    }
    cout<<count ;



return 0;
}