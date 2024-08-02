#include<bits/stdc++.h>
#define int long long int
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;

void solve(){

    int n, x, y;    cin >> n >> x >> y;
    
    vector<int> ans(n, -1);
    x--, y--;

    for(int i = y; i >= 0; i -= 2)  ans[i] = 1;
    for(int i = x; i >= y; i --)    ans[i] = 1;
    for(int i = x; i < n; i += 2)   ans[i] = 1;

    for(int i = 0; i < n; i++) cout << ans[i] << " ";
    cout << "\n";
}

signed main(){
    fast;
    int t = 1;
    cin >> t;
    while(t--){solve();}
    return 0;
}