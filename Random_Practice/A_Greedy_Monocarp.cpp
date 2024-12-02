#include<bits/stdc++.h>
#define int long long int
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL);
using namespace std;

void solve(){
    int n, k;   cin >> n >> k;
    vector<int> v(n);
    for(int i = 0; i < n; i++)  cin >> v[i];
    sort(v.begin(), v.end(), greater<>());

    int sum = 0;
    for(int i = 0; i < n; i++){
        if(sum + v[i] <= k)  sum += v[i];
        else break;
    }
    cout << k - sum << "\n";

}

signed main(){
    fast;
    int t = 1;
    cin >> t;
    while(t--){
        solve();
    }
}