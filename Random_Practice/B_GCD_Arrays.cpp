#include<bits/stdc++.h>
#define int long long int
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;

void solve(){

    int l, r, k;    cin >> l >> r >> k;
    if(l == r){
        cout << (l == 1 ? "NO" : "YES") << "\n";
        return;
    }
    int odd = (r - l) / 2 + ((l & 1) || (r & 1) ? 1: 0);
    if(odd > k) cout << "NO\n";
    else  cout << "YES\n";
}

signed main(){
    fast;
    int t = 1;
    cin >> t;
    while(t--){solve();}
    return 0;
}