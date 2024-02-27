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

ll power(ll a, ll j){
    ll ans = 1;
    while(j--){
        ans *= a;
    }
    return ans;
}

bool pos(ll make, ll a, ll b){

    for(ll i = 0; i <= 30; i++){
        ll one = power(a, i);
        for(ll j = 0; j <= 30; j++){

            int two = power(b, j);
            if(one * two == make)   return true;
            else if(one * two > make)   break;
        }
    }
    return false;
}

void solve(){
    
    ll a, b, l;    cin >> a >> b >> l;

    vector<ll> div;
    for(ll i = 1; i * i <= l; i++){
        if(l % i == 0){
            div.push_back(i);
            if(l / i != i){
                div.push_back(l / i);
            }
        }
    }
    sort(div.begin(), div.end());
    ll ans = 0;
    for(ll i = 0; i < div.size(); i++){
        ll make = l / div[i];

        if(pos(make, a, b)){
            ans++;
        }

    }
    cout << ans << endl;
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