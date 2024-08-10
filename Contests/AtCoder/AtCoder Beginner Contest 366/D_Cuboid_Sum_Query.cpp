#include<bits/stdc++.h>
#define int long long int
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;

void solve(){

    int n;
    cin >> n;
    
    vector<vector<vector<int>>> v(n, vector<vector<int>>(n, vector<int>(n)));
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            for(int k = 0; k < n; k++)   cin >> v[i][j][k];
        }
    }

    vector<vector<vector<int>>> P(n+1, vector<vector<int>>(n+1, vector<int>(n+1, 0)));
    for(int i = 1; i <= n; i++){
        for (int j = 1; j <= n; j++){
            for(int k = 1; k <= n; k++){
                P[i][j][k] = v[i-1][j-1][k-1]
                            + P[i-1][j][k]
                            + P[i][j-1][k]
                            + P[i][j][k-1]
                            - P[i-1][j-1][k]
                            - P[i-1][j][k-1]
                            - P[i][j-1][k-1]
                            + P[i-1][j-1][k-1];
            }
        }
    }

    int q;
    cin >> q;
    while(q--){
        int li, ri, lj, rj, lk, rk;    cin >> li >> ri >> lj >> rj >> lk >> rk;

        int sum = P[ri][rj][rk]
                - (li > 1 ? P[li-1][rj][rk] : 0)
                - (lj > 1 ? P[ri][lj-1][rk] : 0)
                - (lk > 1 ? P[ri][rj][lk-1] : 0)
                + (li > 1 && lj > 1 ? P[li-1][lj-1][rk] : 0)
                + (li > 1 && lk > 1 ? P[li-1][rj][lk-1] : 0)
                + (lj > 1 && lk > 1 ? P[ri][lj-1][lk-1] : 0)
                - (li > 1 && lj > 1 && lk > 1 ? P[li-1][lj-1][lk-1] : 0);

        cout << sum << "\n";
    }
}

signed main(){
    fast;
    int t = 1;
    // cin >> t;
    while(t--){solve();}
    return 0;
}