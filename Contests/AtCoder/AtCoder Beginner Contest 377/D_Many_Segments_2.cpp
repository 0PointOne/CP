#include<bits/stdc++.h>
#define int long long int
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;

void solve(){

    int n, m;   cin >> n >> m;
    vector<int> v(2e5 + 5, m+1);

    for(int i = 1; i <= n; i++){
        int a, b;   cin >> a >> b;
        v[a] = min(b, v[a]);
    }
    for(int i = m-1; i >= 1; i--)   v[i] = min(v[i+1], v[i]);
    
    int ans = 0;
    for(int i = 1; i <= m; i++)  ans += (v[i] - i);
    cout << ans << "\n";
}

signed main(){
    fast;
    int t = 1;
    //cin >> t;
    while(t--){solve();}
    return 0;
}