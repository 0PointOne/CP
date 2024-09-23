#include<bits/stdc++.h>
#define int long long int
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;

void solve(){

    int mx, intTime, n; cin >> mx >> intTime >> n;

    int ans = 0, b = intTime;
    for(int i = 0; i < n; i++){

        ans += (b - 1);
        int t;  cin >> t;
        b = min(mx, t + 1);
    }
    ans += b;

    cout << ans << "\n";

}

signed main(){
    fast;
    int t = 1;
    cin >> t;
    while(t--){solve();}
    return 0;
}