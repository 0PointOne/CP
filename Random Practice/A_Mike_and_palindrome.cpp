#include<bits/stdc++.h>
#define int long long int
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;

void solve(){

    string s;   cin >> s;
    int cnt = 0;
    int l = 0, r = s.size()-1;
    while(l <= r){
        if(s[l++] != s[r--]) cnt++;
    }
    if(cnt == 1 || ((s.size() & 1) && cnt == 0)) cout << "YES";
    else cout << "NO";

}

signed main(){
    fast;
    int t = 1;
    // cin >> t;
    while(t--){solve();}
    return 0;
}