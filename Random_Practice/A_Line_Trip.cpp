#include<bits/stdc++.h>
#define int long long int
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;

void solve(){

    int n, k;   cin >> n >> k;
    int mn = 0;
    int cur = 0;
    int x;
    for(int i = 0; i < n; i++){
        cin >> x;
        mn = max(mn, x - cur);
        cur = x;
    }
    mn = max(mn, 2 * (k - x));
    cout << mn << "\n";
}

signed main(){
    fast;
    int t = 1;
    cin >> t;
    while(t--){solve();}
    return 0;
}