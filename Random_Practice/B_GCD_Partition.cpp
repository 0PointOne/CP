#include<bits/stdc++.h>
#define int long long int
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;

void solve(){

    int n;  cin >> n;
    int sum = 0;
    vector<int> v(n);
    for(int i = 0; i < n; i++){
        cin >> v[i];
        sum += v[i];
    }
    int cnt = 0;
    int mx = 1;
    for(int i = 0; i < n-1; i++){
        cnt += v[i];
        int g = __gcd(cnt, sum - cnt);
        mx = max(mx, g);
    }
    cout << mx << "\n";
}

signed main(){
    fast;
    int t = 1;
    cin >> t;
    while(t--){solve();}
    return 0;
}