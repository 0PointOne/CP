#include<bits/stdc++.h>
#define int long long int
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL);
using namespace std;

void solve(){
    int n;  cin >> n;
    int a = 0, b = 0, c = 0;
    while(n--){
        int x, y, z;    cin >> x >> y >> z;
        a += x, b += y, c += z;
    }

    cout << ((a == 0 && b == 0 && c == 0)  ?  "YES"  :   "NO") << "\n";
}

signed main(){
    fast;
    int t = 1;
    // cin >> t;
    while(t--){
        solve();
    }
}