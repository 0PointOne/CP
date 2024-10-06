#include<bits/stdc++.h>
#define int long long int
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;

void solve(){

    int n, m;   cin >> n >> m;

    vector<vector<int>> v(m, vector<int>(n));
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++)  cin >> v[j][i];
    }

    int ans = 0;
    for(int i = 0; i < m; i++){
        sort(v[i].begin(), v[i].end());

        int sum = 0;
        for(int j = 0; j < n; j++){
            ans += v[i][j] * j - sum;
            sum += v[i][j];
        }
    }
    cout << ans << "\n";

}

signed main(){
    fast;
    int t = 1;
    cin >> t;
    while(t--){solve();}
    return 0;
}