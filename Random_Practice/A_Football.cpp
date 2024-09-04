#include<bits/stdc++.h>
#define int long long int
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;

void solve(){

    string s;   cin >> s;
    int cnt = 1;
    for(int i = 0; i < s.size()-1; i++){
        if(s[i] == s[i+1]) cnt++;
        else   cnt = 1;
        if(cnt >= 7){
            cout << "YES";
            return;
        }
    }
    cout << "NO";

}

signed main(){
    fast;
    int t = 1;
    // cin >> t;
    while(t--){solve();}
    return 0;
}