#include<bits/stdc++.h>
#define int long long int
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;

void solve(){

    int n, a, b;    cin >> n >> a >> b;

    int aCnt = n / a, bCnt = n / b;
    int lcm_ = (a * b ) / __gcd(a, b);
    int overlap = n / lcm_;

    aCnt -= overlap, bCnt -= overlap;

    int64_t ans = ((n * (n+1) * 1LL) / 2) - (((n - aCnt) * (n - aCnt + 1) * 1LL) / 2) - ((bCnt * (bCnt+1)* 1LL) / 2);

    cout << ans << "\n";
 
}

signed main(){
    fast;
    int t = 1;
    cin >> t;
    while(t--){solve();}
    return 0;
}