#include<bits/stdc++.h>
#define int long long int
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;

void solve(){

    int n, k;   cin >> n >> k;
    string s;   cin >> s;

    vector<int> fr(26, 0);
    for(int i = 0; i < n; i++) fr[s[i]-'a']++;

    int cnt = 0;
    for(int i = 0; i < 26; i++) if(fr[i] & 1)  cnt++;

    if(cnt-1 > k ) cout << "NO\n";
    else cout << "YES\n";
}

signed main(){
    fast;
    int t = 1;
    cin >> t;
    while(t--){solve();}
    return 0;
}