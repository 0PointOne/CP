#include<bits/stdc++.h>
#define int long long int
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;

void solve(){

    int n;  cin >> n;
    vector<int> v(n);
    int zero = 0;
    int cnt = 0;
    int sum = 0;
    int mn = INT_MAX;
    for(int i = 0; i < n; i++){
        cin >> v[i];
        if(v[i] == 0) zero++;
        if(v[i] < 0) cnt++;
        if(v[i] < 0) v[i] *= -1;
        sum += v[i];
        mn = min(mn, v[i]);
    }

    if(zero) cout << sum << "\n";
    else if(cnt % 2 == 0) cout << sum << "\n";
    else cout << sum - 2 * mn << "\n";

}

signed main(){
    fast;
    int t = 1;
    cin >> t;
    while(t--){solve();}
    return 0;
}