#include<bits/stdc++.h>
#define int long long int
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;

void solve(){

    string s;   cin >> s;
    if(s[0] == '1' && s[1] == '0'){
        int n = 0;
        int zero = -1;
        int j = 1;
        for(int i = s.size()-1; i >= 2; i--){
            if(s[i] == '0') zero = i;
            n += (s[i] - '0');
            n *= j;
            j *= 10;
        }
        if(zero != 2 && n > 1) cout << "YES" << "\n";
        else cout << "NO" << "\n";
        return;
    }
    cout << "NO" << "\n";
}

signed main(){
    fast;
    int t = 1;
    cin >> t;
    while(t--){solve();}
    return 0;
}