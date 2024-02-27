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

    ll n;  cin >> n;
    vector<ll> pf(n + 1);

    pf[0] = 0;

    for(ll i = 0; i < n; i++){
        cin >> pf[i+1];
        pf[i + 1] += pf[i];
    }
    // print_v(pf);
    
    ll q;  cin >> q;
    while(q--){

        ll l, u;   cin >> l >> u;

        ll s = l, e = n;
        ll mid = s + (e - s) / 2;
        while(s != e){

            if(pf[mid] - pf[l-1] >= u)  e = mid;
            else                        s = mid + 1;

            mid = s + (e - s) / 2;
        }

        ll ans = s;

        ll k = pf[s] - pf[l - 1];
        ll v1 = k * u - k * (k - 1) / 2;

        if(s != l){
            ll o = pf[s - 1] - pf[l - 1];

            ll v2 = o * u - o * (o - 1) / 2;

            if(v2 >= v1)    ans = s - 1;
        }
        cout << ans << " ";
    }
    cout << endl;

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