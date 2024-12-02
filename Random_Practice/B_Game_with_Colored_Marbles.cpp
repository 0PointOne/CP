#include<bits/stdc++.h>
#define int long long int
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL);
using namespace std;

void solve(){
    int n;  cin >> n;
    vector<int> fr(n+1, 0);
    for(int i = 0; i < n; i++){
        int x;  cin >> x;
        fr[x]++;
    }

    int dis = 0, d = 0;
    for(auto it: fr){
        if(it == 1) dis++;
        if(it > 1)  d++;
    }

    int ans = d;
    if(dis & 1) ans += 2 * ((dis / 2) + 1);
    else        ans += 2 * (dis / 2);

    cout << ans << "\n";
}

signed main(){
    fast;
    int t = 1;
    cin >> t;
    while(t--){
        solve();
    }
}