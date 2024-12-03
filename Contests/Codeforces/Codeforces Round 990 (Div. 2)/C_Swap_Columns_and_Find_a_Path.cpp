#include<bits/stdc++.h>
#define int long long int
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL);
using namespace std;

void solve(){
    int n;  cin >> n;
    vector<pair<int, int>> v(n);
    for(int i = 0; i < n; i++){
        cin >> v[i].first;
    }
    for(int i = 0; i < n; i++){
        cin >> v[i].second;
    }

    int mxIdx = 0, ans = 0;
    int mx = INT_MIN;
    for(int i = 0; i < n; i++){
        if(v[i].first > v[i].second) ans += v[i].first, mx = max(mx, v[i].second);
        else ans += v[i].second, mx = max(mx, v[i].first);
    }

    cout << ans + mx << "\n";
}

signed main(){
    fast;
    int t = 1;
    cin >> t;
    while(t--){
        solve();
    }
}