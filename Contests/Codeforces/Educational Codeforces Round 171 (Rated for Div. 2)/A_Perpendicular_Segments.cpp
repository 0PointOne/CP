#include<bits/stdc++.h>
#define int long long int
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;

void solve(){

    int x, y, k;    cin >> x >> y >> k;
    int mn = min(x, y);

    cout << 0 << " " << 0 << " " << mn << " " << mn << "\n";
    cout << 0 << " " << mn << " " << mn << " " << 0 << "\n";

}

signed main(){
    fast;
    int t = 1;
    cin >> t;
    while(t--){solve();}
    return 0;
}