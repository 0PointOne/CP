#include<bits/stdc++.h>
#define int long long int
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;

void solve(){

    int n;  cin >> n;
    map<int, int> mp;
    string s;   cin >> s;
    for(int i = 0; i < n; i++){
        mp[s[i]]++;
    }
    if(mp.size() == 1 || s[0] == s.back()) cout << "NO" << "\n";
    else cout << "YES" << "\n";
}

signed main(){
    fast;
    int t = 1;
    cin >> t;
    while(t--){solve();}
    return 0;
}