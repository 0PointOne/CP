#include<bits/stdc++.h>
#define int long long int
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;

void solve(){
    string s;   cin >> s;

    vector<int> mp(26, 0);  
    for(int i = 0; i < s.size(); i++){
        mp[s[i] - 'A'] = i + 1;
    }

    string a = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";

    int ans = 0;
    int idx = mp[0];

    for(int i = 1; i < 26; i++){
        int current_pos = mp[a[i] - 'A'];
        int dist = abs(current_pos - idx);
        idx = current_pos;
        ans += dist;
    }

    cout << ans << "\n";
}

signed main(){
    fast;
    int t = 1;
    //cin >> t;
    while(t--){
        solve();
    }
    return 0;
}
