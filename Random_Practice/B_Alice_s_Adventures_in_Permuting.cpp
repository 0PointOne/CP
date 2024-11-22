#include<bits/stdc++.h>
#define int long long int
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL);
using namespace std;

void solve(){
    int n, b, c;    cin >> n >> b >> c;
    
    if(b == 0){
        if(c == n - 2 || c == n - 1)  cout << n-1 << "\n";
        else if(c < n-2)              cout << -1 << "\n";
        else                          cout << n << "\n";
    }
    else{
        cout << n - max((n - c + b - 1) / b, 0LL) << "\n";
    }
}

signed main(){
    fast;
    int t = 1;
    cin >> t;
    while(t--){
        solve();
    }
}