#include<bits/stdc++.h>
#define int int64_t
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<int> v;
    
    for(int i = 0; i <= 63; i++){
        int k = (1LL << i) - 1;
        if(k > n) break;

        if((1LL << i) & n) {
            int k = n - (1LL << i);
            if(k != 0) v.push_back(k);
        }
    }
    
    v.push_back(n);
    sort(v.begin(), v.end());
    cout << v.size() << "\n";
    for(int x : v) cout << x << " ";
    cout << "\n";   
}

signed main() {
    fast;
    int t = 1;
    cin >> t;
    while(t--) { solve(); }
    return 0;
}
