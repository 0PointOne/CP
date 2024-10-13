#include<bits/stdc++.h>
#define int long long int
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;

void solve(){

    string a, b;    cin >> a >> b;
    int one_s = 0, one_t = 0, unr = 0;

    for(int i = 0; i < a.size(); i++){
        if(a[i] == '+')  one_s++;

        if(b[i] == '+')  one_t++;
        if(b[i] == '?') unr++;
    }

    int cnt = 0;
    int k = (1 << unr);
    for(int i = 0; i < k; i++){
        if((__builtin_popcount((i)) + one_t) == one_s)  cnt++;
    }

    double ans = (double)cnt / k;
    cout << fixed << setprecision(12) << ans;

}

signed main(){
    fast;
    int t = 1;
    //cin >> t;
    while(t--){solve();}
    return 0;
}