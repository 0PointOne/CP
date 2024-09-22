#include<bits/stdc++.h>
#define int long long int
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;

void solve(){

    string s;   cin >> s;
    string ans = "";
    for(int i = 0; i < s.size(); i++){
        if(s[i] != '.') ans += s[i];
    }
    cout << ans << "\n";

}

signed main(){
    fast;
    int t = 1;
    //cin >> t;
    while(t--){solve();}
    return 0;
}