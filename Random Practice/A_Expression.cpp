#include<bits/stdc++.h>
#define int long long int
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;

void solve(){

    int a, b, c;    cin >> a >> b >> c;
    int mx = INT_MIN;
    mx = max(mx, a + b + c);
    mx = max(mx, (a + b) * c);
    mx = max(mx, a + (b * c));
    mx = max(mx, a * b * c);
    mx = max(mx, a * (b + c));
    mx = max(mx, (a * b) + c);

    cout << mx << "\n";
}

signed main(){
    fast;
    int t = 1;
    // cin >> t;
    while(t--){solve();}
    return 0;
}