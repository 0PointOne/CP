#include<bits/stdc++.h>
#define int long long int
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL);
using namespace std;

void solve(){
    int n;  cin >> n;
    vector<int> v(n);
    for(int i = 0; i < n; i++)    cin >> v[i];
    
    int ans = 0;
    for(int i = 0; i < n; i++){
        for(int j = i; j < n; j++){
            int sum = 0;
            for(int k = 0; k < n; k++){
                if(k > j || k < i)  sum += v[k];
                else                sum += (1 - v[k]);
                ans = max(ans, sum);
            }
        }
    }
    cout << ans << "\n";
}

signed main(){
    fast;
    int t = 1;
    // cin >> t;
    while(t--){
        solve();
    }
}