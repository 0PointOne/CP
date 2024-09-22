#include<bits/stdc++.h>
#define int long long int
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;

void solve(){

    int n, k;  cin >> n >> k;
    int cnt = 0;

    int robinHas = 0;
    for(int i = 0; i < n; i++){
        int x;  cin >> x;
        if(x >= k) robinHas += x;
        else if(x == 0 && robinHas > 0) cnt++, robinHas--;
    }
    cout << cnt << "\n";

}

signed main(){
    fast;
    int t = 1;
    cin >> t;
    while(t--){solve();}
    return 0;
}