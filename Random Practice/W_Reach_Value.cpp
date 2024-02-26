#include<bits/stdc++.h>
#define endl "\n"
#define ll long long
#define s(a, b) a+b
#define v_all v.begin(), v.end()
#define mod 100000007
#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define print_v(v) for(auto it : v) cout << it << " "; cout << endl;
#define print_v_pair(v) for(auto it: v) cout << it.first << " " << it.second << endl;
#define input_v for(auto &it : v)   cin >> it;
using namespace std;

bool can_reach(ll i, ll n, map<ll, bool> &dp){

    if(i > n)   return false;
    if(i == n)  return true;

    if(dp.find(i) != dp.end())  return dp[i];

    return dp[i] = can_reach(i * 10, n, dp)  || can_reach(i * 20, n, dp);

}

void solve(){
    
    ll n;  cin >> n;
    map<ll, bool> dp;

    cout << (can_reach(1, n, dp) ?  "YES"  :   "NO") << endl;
}

int main(){
    fast_io;

    ll t = 1;
    cin >> t;
    while(t--){
        solve();
    }

    return 0;
}