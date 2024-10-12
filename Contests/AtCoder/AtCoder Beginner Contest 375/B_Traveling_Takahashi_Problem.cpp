#include<bits/stdc++.h>
#define int long long int
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;


void solve(){

    int n;  cin >> n;
    double ans = 0;
    int a = 0, b = 0;
    for(int i = 0; i < n; i++){
        int x, y;  cin >> x >> y;
        ans += sqrt(((x - a) * (x - a)) + (y - b) * (y - b));
        a = x;  b = y;
    }
    ans += sqrt(a * a + b * b);

    cout << fixed << setprecision(20) << ans << endl;

}

signed main(){
    fast;
    int t = 1;
    //cin >> t;
    while(t--){solve();}
    return 0;
}