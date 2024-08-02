#include<bits/stdc++.h>
#define int long long int
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;

void solve(){

    int n;  cin >> n;
    string s, t;    cin >> s >> t;
    for(int i = 0; i < n; i++){

        if(s[i] == '0' && t[i] == '0') continue;
        else if(s[i] == '0' && t[i] == '1'){
            cout << "NO" << "\n";
            return;
        }
        else   break;
    }
    cout << "YES" << "\n";
}

signed main(){
    fast;
    int t = 1;
    cin >> t;
    while(t--){solve();}
    return 0;
}