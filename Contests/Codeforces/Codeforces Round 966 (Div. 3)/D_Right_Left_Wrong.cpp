#include<bits/stdc++.h>
#define int long long int
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;

void solve(){

    int n;  cin >> n;
    vector<int> pf(n+1);
    for(int i = 1; i <= n; i++) cin >> pf[i], pf[i] += pf[i-1];

    int ans = 0;
    int s = 0, r = n-1;
    string str; cin >> str;
    while(s <= r){
        while(s <= r && str[s] != 'L') s++;
        while(s <= r && str[r] != 'R') r--;
        if(str[s] == 'L' && str[r] == 'R'){
            ans += (pf[r+1] - pf[s]);
            s++;
            r--;
        }
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