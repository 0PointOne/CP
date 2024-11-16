#include<bits/stdc++.h>
#define int long long int
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL);
using namespace std;

void solve(){
    int n;  cin >> n;
    string s, t;    cin >> s >> t;
    int s1 = 0, s0 = 0, t1 = 0, t0 = 0;
    for(int i = 0; i < n; i++){
        if(s[i] == '1') s1++;
        else            s0++;

        if(i < n-2){
            if(t[i] == '1') t1++;
            else            t0++;
        }
    }
    cout << ((s1 - t0 > 0 && s0 - t1 > 0)  ?   "YES"    :     "NO") << "\n";
}

signed main(){
    fast;
    int t = 1;
    cin >> t;
    while(t--){
        solve();
    }
}