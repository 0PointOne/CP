#include<bits/stdc++.h>
#define int long long int
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;

void solve(){

    int n = 8;
    vector<vector<bool> > v(n, vector<bool>(n, true));

    for(int i = 0; i < 8; i++){
        for(int j = 0; j < 8; j++){
            char ch;    cin >> ch;
            if(ch == '#'){
                for(int k = 0; k < 8; k++){
                    v[i][k] = false;
                }
                for(int k = 0; k < 8; k++){
                    v[k][j] = false;
                }
            }
        }
    }
    int cnt = 0;
    for(int i = 0; i < 8; i++){
        for(int j = 0; j < 8; j++){
            if(v[i][j]) cnt++;
        }
    }
    cout << cnt << "\n";
}

signed main(){
    fast;
    int t = 1;
    //cin >> t;
    while(t--){solve();}
    return 0;
}