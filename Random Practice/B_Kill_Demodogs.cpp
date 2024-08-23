#include<bits/stdc++.h>
#define ll long long
#define MOD 1000000007
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;

void solve(){

    ll n;  cin >> n;
    ll ans = (((((n * (n + 1)) % MOD) * (4*n - 1)) % MOD) * 337) % MOD;
  
    cout << ans << "\n";
}

signed main(){
    fast;
    ll t = 1;
    cin >> t;
    while(t--){solve();}
    return 0;
}