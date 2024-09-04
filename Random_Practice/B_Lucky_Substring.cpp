#include<bits/stdc++.h>
#define int long long int
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;

void solve(){

    string s;   cin >> s;
    int four = 0, seven = 0;
    for(int i = 0; i < s.size(); i++){
        if(s[i] == '4') four++;
        if(s[i] == '7') seven++;
    }
    if(four == seven) cout << (four == 0 ?  -1  : 4) << "\n";
    else cout << (four > seven ?  4 : 7)  << "\n";
}

signed main(){
    fast;
    int t = 1;
    // cin >> t;
    while(t--){solve();}
    return 0;
}