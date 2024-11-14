#include<bits/stdc++.h>
#define int long long int
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL);
using namespace std;

void solve(){
    int n, a, b;    cin >> n >> a >> b;
    string s;   cin >> s;
    int x = 0, y = 0;

    int time = 100;
    while(time--){
        for(int i = 0; i < n; i++){
            if(s[i] == 'N')      y++;
            else if(s[i] == 'S') y--;
            else if(s[i] == 'E') x++;
            else if(s[i] == 'W') x--;

            if(x == a && y == b){
                cout << "YES\n";
                return;
            }
        }
    }
    cout << "NO\n";
}

signed main(){
    fast;
    int t = 1;
    cin >> t;
    while(t--){
        solve();
    }
}