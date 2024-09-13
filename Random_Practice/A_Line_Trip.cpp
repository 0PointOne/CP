#include<bits/stdc++.h>
#define int long long int
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;

void solve(){

    int n, dis; cin >> n >> dis;
    int mn = 0;
    int k = 0;
    for(int i = 0; i < n; i++){
        int x;  cin >> x;
        mn = max(mn, x - k);
        k = x;
    }
    mn = max(mn, (dis - k) * 2);
    cout << mn << "\n";
}

signed main(){
    fast;
    int t = 1;
    cin >> t;
    while(t--){solve();}
    return 0;
}