#include<bits/stdc++.h>
#define int long long int
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL);
using namespace std;

int maxPic(int n, int a, int b, int c, vector<int> &dp){
    if(n == 0) return 0;
    if(n < 0)  return INT_MIN;

    if(dp[n] != -1)  return dp[n];
    int ans = INT_MIN;
    ans = max(ans, maxPic(n-a, a, b, c, dp));
    ans = max(ans, maxPic(n-b, a, b, c, dp));
    ans = max(ans, maxPic(n-c, a, b, c, dp));

    return dp[n] = ans + 1;

}

void solve(){
    int n, a, b, c; cin >> n >> a >> b >> c;
    vector<int> dp(n+10, -1);
    int ans = maxPic(n, a, b, c, dp);
    cout << (ans < 0  ?  0   : ans) << "\n";
}

signed main(){
    fast;
    int t = 1;
    // cin >> t;
    while(t--){
        solve();
    }
}