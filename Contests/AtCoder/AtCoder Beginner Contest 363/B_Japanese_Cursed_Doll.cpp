#include<bits/stdc++.h>
#define int long long int
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;

void solve(){

    int n, t, p;    cin >> n >> t >> p;
    vector<int> v(n);
    for(int i = 0; i < n; i++)  cin >> v[i];

    sort(v.begin(), v.end(), greater());
    int ans = 0;

    for(int i = 0; i < n && p--; i++){
        if(v[i] >= t) continue;
        else ans = t - v[i];
    }
    cout << ans << "\n";
}

signed main(){
    fast;
    int t = 1;
    // cin >> t;
    while(t--){solve();}
    return 0;
}