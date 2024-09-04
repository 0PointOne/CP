#include<bits/stdc++.h>
#define int long long int
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;

void solve(){

    int n, k;   cin >> n >> k;

    vector<vector<int> > v(n, vector<int>(n));
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++) cin >> v[i][j];
    }

    vector<vector<int> > a(n, vector<int>(n));
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++)    a[i][n-j-1] = v[i][j];
    }

    vector<vector<int> > b(n, vector<int>(n));
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++)  b[n-i-1][j] = a[i][j];
    }

    int cnt = 0;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(v[i][j] != b[i][j]) cnt++;
        }
    }

    if(cnt/2 <= k && ((n & 1) || (k - (cnt / 2)) % 2 == 0))  cout << "YES" << "\n";
    else   cout << "NO" <<  "\n";
}

signed main(){
    fast;
    int t = 1;
    cin >> t;
    while(t--){solve();}
    return 0;
}