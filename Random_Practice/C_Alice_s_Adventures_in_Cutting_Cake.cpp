#include<bits/stdc++.h>
#define int long long int
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL);
using namespace std;

void solve(){
    int n, m, v;    cin >> n >> m >> v;
    vector<int> vec(n+1);
    for(int i = 1; i <= n; i++) cin >> vec[i];

    vector<int> pf(n+1, 0);
    for(int i = 1; i <= n; i++) pf[i] = pf[i-1] + vec[i];

    vector<int> a, b;
    a.push_back(1);
    b.push_back(n);
    
    int sum = 0;
    for(int i = 1; i <= n; i++){
        sum += vec[i];
        if(sum >= v){
            a.push_back(i+1);
            sum = 0;
        }
    }

    sum = 0;
    for(int i = n; i >= 1; i--){
        sum += vec[i];
        if(sum >= v) b.push_back(i-1), sum = 0;
    }

    if(a.size()-1 < m){
        cout << -1 << "\n";
        return;
    }

    int ans = 0;
    for(int i = 0; i <= m; i++){
        int l = a[i], h = b[m-i];
        int sum = pf[h] - pf[l-1];
        ans = max(ans, sum);
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