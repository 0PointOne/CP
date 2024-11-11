#include<bits/stdc++.h>
#define int long long int
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL);
using namespace std;

void solve(){
    int n;  cin >> n;
    string s, r;    cin >> s >> r;
    r.pop_back();

    int s1 = 0, r1 = 0, s0 = 0, r0 = 0;
    for(int i = 0; i < n; i++){
        if(s[i] == '0') s0++;
        else            s1++;
    }
    for(int i = 0; i < r.size(); i++){
        if(r[i] == '0') r0++;
        else            r1++;
    }

    cout << ((s1 - r0 > 0 && s0 - r1 > 0) ? "YES"  : "NO") << "\n";
}

signed main(){
    fast;
    int t = 1;
    cin >> t;
    while(t--){
        solve();
    }
}