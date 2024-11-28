#include<bits/stdc++.h>
#define int long long int
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL);
using namespace std;

void solve(){
    int n;  cin >> n;
    string s;   cin >> s;

    int i = 0;
    int one = 0;
    int mx = 0;
    while(i < n){
        if(s[i] == '1') one++, i++;
        else if(s[i] == '/'){
            i++;
            int two = 0;
            while(i < n && s[i] == '2') i++, two++;
            mx = max(mx, 2 * min(one, two) + 1);
            one = 0;
        }
        else{
            one = 0, i++;
        }
    }
    cout << mx << "\n";
}

signed main(){
    fast;
    int t = 1;
    // cin >> t;
    while(t--){
        solve();
    }
}