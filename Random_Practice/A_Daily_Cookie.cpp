#include<bits/stdc++.h>
#define int long long int
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL);
using namespace std;

void solve(){
    int n, d;   cin >> n >> d;
    string s;   cin >> s;

    int cnt = 0;
    for(int i = 0; i < n; i++){
        if(s[i] == '@') cnt++;
    }

    int ans = min(cnt, d);
    int k = n - cnt;
    cout << ans + k << "\n";
}

signed main(){
    fast;
    int t = 1;
    // cin >> t;
    while(t--){
        solve();
    }
}