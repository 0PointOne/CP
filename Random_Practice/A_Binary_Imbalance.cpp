#include<bits/stdc++.h>
#define int long long int
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;

void solve(){

    int n;  cin >> n;
    string s;   cin >> s;
    int cntZero = 0;
    for(int i = 0; i < n; i++){
        if(s[i] == '0') cntZero++;
    }
    if(cntZero > 0) cout << "YES\n";
    else            cout << "NO\n";
}

signed main(){
    fast;
    int t = 1;
    cin >> t;
    while(t--){solve();}
    return 0;
}