#include<bits/stdc++.h>
#define int long long int
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;

int binExp(int a, int b, int m){
    int ans = 1;
    a %= m;
    while(b){
        if(b & 1) ans = (ans * a) % m;
        a = (a * a) % m;
        b >>= 1;
    }return ans;

}

void solve(){

    int n;  cin >> n;
    vector<int> v(n);
    for(int i = 0; i < n; i++)  cin >> v[i];

    vector<bool> pr(101, true);
    pr[0] = pr[1] = false;
    for(int i = 2; i * i <= 100; i++){
        if(pr[i]){
            for(int j = i*i; j <= 100; j += i)  pr[j] = false;
        }
    }

    vector<vector<int>> pf(n, vector<int>(101, 0));
    for(int i = 0; i < n; i++){
        for(int j = 2; j <= 100; j++){
            if(pr[j]){
                while(v[i] % j == 0){
                    pf[i][j]++;
                    v[i] /= j;
                }
                if(i) pf[i][j] += pf[i-1][j];
            }
        }
    }

    int q;  cin >> q;
    while(q--){
        int l, r, m;    cin >> l >> r >> m;
        l--, r--;
        int ans = 1;
        for(int i = 0; i <= 100; i++){
            if(pr[i]){
                ans = (ans * binExp(i, pf[r][i] - (l ? pf[l-1][i] : 0), m)) % m;
            }
        }
        cout << ans << "\n";
    }
}

signed main(){
    fast;
    int t = 1;
    //cin >> t;
    while(t--){solve();}
    return 0;
}