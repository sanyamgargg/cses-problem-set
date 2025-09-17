#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++) cin >> v[i];
    
    sort(v.begin(), v.end());

    long long res = 1; // Smallest number we cannot form yet
    for (int i = 0; i < n && v[i] <= res; i++) {
        res += v[i];
        cout<<v[i]<<" "<<res<<"\n" ;
    }

    cout << res;
    return 0;
}