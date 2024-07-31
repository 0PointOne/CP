#include<bits/stdc++.h>
#define int long long int
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;

void solve(){

    int n;  cin >> n;
    string s;   cin >> s;

    if(n == 1){
        if(s[0] == '1') cout << 0 << "\n";
        else            cout << 1 << "\n";
    }
    else if(s[0] == '1' && s.back() == '1') cout << 0 << "\n";
    else if(s[0] == '0' && s.back() == '0') cout << 2 << "\n";
    else                                    cout << 1 << "\n";
}

signed main(){
    fast;
    int t = 1;
    cin >> t;
    while(t--){solve();}
    return 0;
}