#include<bits/stdc++.h>
#define int long long int
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;

void solve(){

    int n, p, l, t; cin >> n >> p >> l >> t;

    auto isPos = [&](int days){

        int weeks = (n + 6) / 7;
        return (min(weeks, 2 * days) * t + (days * l)) >= p;
    };

    int s = 0, e = n;
    int ans = n;
    while(e - s > 1){
        int mid = s + (e - s) / 2;

        if(isPos(mid)){
            ans = min(ans, mid);
            e = mid;
        }
        else  s = mid;
    }

    cout << n - ans << "\n";

}

signed main(){
    fast;
    int t = 1;
    cin >> t;
    while(t--){solve();}
    return 0;
}