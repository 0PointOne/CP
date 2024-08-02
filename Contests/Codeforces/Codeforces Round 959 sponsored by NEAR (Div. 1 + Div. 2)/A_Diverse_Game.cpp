#include<bits/stdc++.h>
#define int long long int
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;

void solve(){

    int n, m;   cin >> n >> m;
    vector<vector<int>> v(n, vector<int>(m));

    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++) cin >> v[i][j];
    }
    vector<vector<int> > ans(n, vector<int>(m));
    if(n * m == 1){
        cout << -1 << "\n";
        return;
    }
    else if(m == 1){
        for(int i = 0; i < n-1; i++){
            ans[i][0] = v[i+1][0];
        }
        ans[n-1][0] = v[0][0];
    }
    else{
        for(int i = 0; i < n; i++){
            for(int j = 0; j < m-1; j++){
                ans[i][j] = v[i][j+1];
            }
            ans[i][m-1] = v[i][0];
        }
    }
    
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++) cout <<  ans[i][j] << " ";
        cout << "\n";
    }

}

signed main(){
    fast;
    int t = 1;
    cin >> t;
    while(t--){solve();}
    return 0;
}