#include<bits/stdc++.h>
#define int long long int
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;

void solve(){

    int n;  cin >> n;
    string s;   cin >> s;

    int cnt = 0;
    for(int i = 1; i < n-1; i++){
        if(s[i] == '.' && s[i+1] == '#' && s[i-1] == '#') cnt++;
    }
    cout << cnt << "\n";

}

signed main(){
    fast;
    int t = 1;
    //cin >> t;
    while(t--){solve();}
    return 0;
}