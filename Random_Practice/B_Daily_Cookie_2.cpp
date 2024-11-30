#include<bits/stdc++.h>
#define int long long int
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL);
using namespace std;

void solve(){
    int n, d;   cin >> n >> d;
    string s;   cin >> s;
    int i = n-1;
    while(i >= 0){
        if(d == 0)  break;
        if(s[i] == '@'){
            d--;
            s[i] = '.';
        }
        i--;
    }
    cout << s << " \n";
}

signed main(){
    fast;
    int t = 1;
    // cin >> t;
    while(t--){
        solve();
    }
}