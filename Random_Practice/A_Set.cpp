#include<bits/stdc++.h>
#define int long long int
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL);
using namespace std;

void solve(){
    int l, r, k;    cin >> l >> r >> k;

    int s = l, e = r, ans = 0;
    int mid = s + (e - s) / 2;
    while(s <= e){
        if(mid * k <= r){
            ans = mid - l + 1;
            s = mid + 1;
        }
        else  e = mid - 1;
        mid = s + (e - s) / 2;
    }
    cout << ans << "\n";
}

signed main(){
    fast;
    int t = 1;
    cin >> t;
    while(t--){
        solve();
    }
}