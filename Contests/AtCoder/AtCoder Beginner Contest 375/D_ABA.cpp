#include<bits/stdc++.h>
#define int long long
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;

void solve(){

    string s;    cin >> s;
    int n = s.size();
    unordered_map<char, int> a, b;
    for(int i = 0; i < n; i++)  a[s[i]]++;

    int ans = 0;    
    for(int i = 0; i < n; i++){
        char ch = s[i];
        a[ch]--;

        for(auto it : b){
            char ch1 = it.first;
            ans += it.second * a[ch1];
        }
        b[ch]++;
    }
    cout << ans << "\n";
}

signed main(){
    fast;
    int t = 1;
    while(t--){
        solve();
    }
    return 0;
}
