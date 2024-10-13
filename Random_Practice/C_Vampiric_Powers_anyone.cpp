#include<bits/stdc++.h>
#define int long long int
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;

void solve(){

    int n;  cin >> n;
    vector<int> v(n);
    int oR_ = 0, xor_ = 0;
    vector<int> pf(n);
    for(int i = 0; i < n; i++)  cin >> v[i], oR_ |= v[i];

    vector<int> a(1 << 8);
    a[0] = 1;

    int ans = 0;
    for(int i = 0; i < n; i++){
        xor_ ^= v[i];
        for(int j = 0; j < (1 << 8); j++){
            if(a[j])  ans = max(xor_ ^ j, ans);
        }
        a[xor_] = 1;
    }
    cout << ans << "\n";
}

signed main(){
    fast;
    int t = 1;
    cin >> t;
    while(t--){solve();}
    return 0;
}