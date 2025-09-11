#include<bits/stdc++.h>
using namespace std;
int n ;
vector<int> arr ;
long long ans = __LONG_LONG_MAX__ ;
void solve(long long grp1,long long grp2, int index){
    if(index == n){
        ans = min(ans,abs(grp1-grp2)) ;
        return ;
    }
    solve(grp1+arr[index],grp2,index+1) ;
    solve(grp1,grp2 + arr[index],index+1) ;
     
}

int main(){
    cin>>n ;
    for(int i = 0 ; i<n ; i++){
        int x ;
        cin>>x ;
        arr.push_back(x) ;
    }

    solve(0,0,0) ;
    cout<<ans ;
    


return 0;
}