#include<bits/stdc++.h>
#define int long long int
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL);
using namespace std;

void solve(){
    string s;   cin >> s;
    int n = s.size();
    bool ist = true;
    if(n & 1) ist = false;

    vector<int> fr(26, 0);
    for(int i = 0; i < n; i+=2){
        if(s[i] != s[i+1]) ist = false;
    }

    for(int i = 0; i < n; i++){
        fr[s[i] - 'a']++;
    }

    for(int i = 0; i < 26; i++){
        if(fr[i] != 0 && fr[i] != 2) ist = false;
    }

    cout << (ist ? "Yes" : "No") << "\n";
}

signed main(){
    fast;
    int t = 1;
    // cin >> t;
    while(t--){
        solve();
    }
}