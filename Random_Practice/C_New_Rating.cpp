#include<bits/stdc++.h>
#define int long long int
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL);
using namespace std;

void solve(){
    int n;  cin >> n;
    vector<int> v(n);
    for(int i = 0; i < n; i++)  cin >> v[i];

    vector<int> pf(n);
    pf[0] = 1;
    int x = 1;
    for(int i = 1; i < n; i++){
        if(v[i] > x) x++;
        else if(v[i] < x) x--;
        pf[i] = max(pf[i-1], x);
    }

    vector<int> dp(n);
    dp[0] = 0;
    for(int i = 1; i < n; i++){
        int y = dp[i-1];
        if(v[i] > y) y++;
        else if(v[i] < y) y--;
        dp[i] = max(y, pf[i-1]);
    }
    cout << dp[n-1] << "\n";
}

signed main(){
    fast;
    int t = 1;
    cin >> t;
    while(t--){
        solve();
    }
}