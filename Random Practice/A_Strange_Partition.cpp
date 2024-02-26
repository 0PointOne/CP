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

void solve(){
    
    ll n, x;   cin >> n >> x;
    vector<ll> v(n);
    ll mx = 0;
    ll sum = 0;
    for(ll i = 0; i < n; i++){
        cin >> v[i];
        mx += (v[i] + (x - 1)) / x;
        sum += v[i];
    }

    cout << (sum + (x - 1)) / x << " " << mx << endl;
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