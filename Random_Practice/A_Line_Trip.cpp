#include<bits/stdc++.h>
#define int long long int
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL);
using namespace std;

void solve(){
    int n, d;  cin >> n >> d;
    vector<int> v(n);
    for(int i = 0; i < n; i++)  cin >> v[i];

    int mn = max(v[0], 2 * (d - v[n-1]));
    for(int i = 1; i < n; i++){
        mn = max(mn, v[i] - v[i-1]);
    }
    cout << mn << "\n";
}

signed main(){
    fast;
    int t = 1;
    cin >> t;
    while(t--){
        solve();
    }
}