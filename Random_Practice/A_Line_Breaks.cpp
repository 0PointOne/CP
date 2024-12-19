#include<bits/stdc++.h>
#define int long long int
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL);
using namespace std;

void solve(){
    int n, m;   cin >> n >> m;
    int sum = 0;
    int cnt = 0;
    while(n--){
        string s;   cin >> s;
        sum += s.size();
        if(sum <= m) cnt++;
    }
    cout << cnt << "\n";
}

signed main(){
    fast;
    int t = 1;
    cin >> t;
    while(t--){
        solve();
    }
}