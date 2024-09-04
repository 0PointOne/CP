#include<bits/stdc++.h>
#define int long long int
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;

void solve(){

    string s;   cin >> s;
    vector<int> fr(26, 0);
    for(int i = 0; i < s.size(); i++) fr[s[i] - 'a']++;
    
    int cnt = 0;
    int odd = 0;
    for(int i = 0; i < 26; i++){
        if(fr[i]) cnt++;
        if(fr[i] & 1) odd = fr[i];
    }

    if(cnt == 1) cout << "NO" << "\n";
    else if((s.size() % 2 == 0) || ( (s.size() & 1) && ((cnt > 2) || (cnt == 2 &&  odd > 1)))) cout << "YES" << "\n";
    else cout << "NO" << "\n";
    
}

signed main(){
    fast;
    int t = 1;
    cin >> t;
    while(t--){solve();}
    return 0;
}