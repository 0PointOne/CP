#include<bits/stdc++.h>
#define int long long int
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;

void solve(){

    int n;  cin >> n;
    string s;   cin >> s;
    int cnt = 0, mx = 0, sum = 0;

    for(int i = 0; i < n; i++){
        if(s[i] == '.') cnt++, sum++;
        else{
            mx = max(mx, cnt);
            cnt = 0;
        }
    }
    mx = max(mx, cnt);

    if(mx >= 3) cout << 2 << "\n";
    else        cout << sum << "\n";

}

signed main(){
    fast;
    int t = 1;
    cin >> t;
    while(t--){solve();}
    return 0;
}