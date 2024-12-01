#include<bits/stdc++.h>
#define int long long int
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL);
using namespace std;

void solve(){
    int n;  cin >> n;
    string s;   cin >> s;
    int mx = INT_MIN, cnt = 0, cnt_dot = 0;
    int i = 0;
    while(i < n){

        if(s[i] == '.'){
            while(i < n && s[i] == '.') cnt++, cnt_dot++, i++;
            mx = max(mx, cnt);
            cnt = 0;
            continue;
        }
        i++;
    }

    cout << (mx >= 3 ?   2  : cnt_dot) << "\n";
}

signed main(){
    fast;
    int t = 1;
    cin >> t;
    while(t--){
        solve();
    }
}