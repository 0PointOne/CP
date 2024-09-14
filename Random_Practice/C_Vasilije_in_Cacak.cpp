#include<bits/stdc++.h>
#define int long long int
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;

void solve(){

    int n, k, x;    cin >> n >> k >> x;

    int sum = (n * (n + 1) / 2 ) - ((n - k) * (n - k + 1) / 2);

    int mn = (k * (k + 1) / 2);
    
    if(sum >= x && x >= mn) cout << "YES" << "\n";
    else cout << "NO\n"; 

}

signed main(){
    fast;
    int t = 1;
    cin >> t;
    while(t--){solve();}
    return 0;
}