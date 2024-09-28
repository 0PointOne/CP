#include<bits/stdc++.h>
#define int long long int
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;

void solve() {
    int n;  
    cin >> n;
    
    vector<int> a(n), b(n);
    
    for(int i = 0; i < n; i++)   cin >> a[i];
    for(int i = 0; i < n; i++)   cin >> b[i];

    int a_mx = *max_element(a.begin(), a.end());
    int b_mx = *max_element(b.begin(), b.end());
    
    cout << a_mx + b_mx << "\n";
}

signed main() {
    fast;
    int t = 1;
    // cin >> t;
    while(t--) {
        solve();
    }
    return 0;
}
