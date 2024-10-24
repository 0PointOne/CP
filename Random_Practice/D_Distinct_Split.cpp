#include<bits/stdc++.h>
#define int long long int
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;

void solve(){

    int n;  cin >> n;
    string s;   cin >> s;
    vector<int> a(26, 0), b(26, 0);

    for(int i = 0; i < n; i++)  a[s[i] - 'a']++;

    int ans = 0;
    for(int i = 0; i < 26; i++){
        ans += (a[i] ? 1 : 0);
    }
    
    for(int i = 0; i < n; i++){
        a[s[i] - 'a']--;
        b[s[i] - 'a']++;

        int cnt = 0;
        for(int i = 0; i < 26; i++){
            if(a[i]) cnt++;
            if(b[i]) cnt++;
        }
        ans = max(ans, cnt);
    }
    cout << ans << "\n";
}

signed main(){
    fast;
    int t = 1;
    cin >> t;
    while(t--){solve();}
    return 0;
}