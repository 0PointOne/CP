//? Resolved with assistance:
/*
!   Implementation
*/
#include<bits/stdc++.h>
#define int long long int
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;

void solve(){

    int n;  cin >> n;
    if(n == 1){
        cout << 0 << "\n";
        return;
    }

    n-= 2;
    int inc = 9;
    while(n >= 2 * inc){
        n -= 2 * inc;
        inc *= 10;
    }

    string ans = to_string(n % inc + inc / 9);

    cout << ans;

    if(n < inc) ans.pop_back();
    reverse(ans.begin(), ans.end());
    cout << ans; 

}

signed main(){
    fast;
    int t = 1;
    // cin >> t;
    while(t--){solve();}
    return 0;
}