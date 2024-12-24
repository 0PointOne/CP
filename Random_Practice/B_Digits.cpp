#include<bits/stdc++.h>
#define int long long int
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL);
using namespace std;

void solve(){
    int n, d;   cin >> n >> d;

    cout << 1 << " ";
    if(d % 3 == 0 || n >= 3) cout << 3 << " ";
    if(d == 5)               cout << 5 << " ";

    if((d == 7)|| (n >= 3))  cout << 7 << " ";

    if(n >= 6) cout << 9 << " ";
    else if(((d == 3 || d == 6) && n >= 3) || d == 9) cout << 9 << " ";


    cout << "\n";
}

signed main(){
    fast;
    int t = 1;
    cin >> t;
    while(t--){
        solve();
    }
}