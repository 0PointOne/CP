#include<bits/stdc++.h>
#define int long long int
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;

void solve(){

    int x, y, k;    cin >> x >> y >> k;
    if(k & 1){
        cout << x << " " << y << "\n";
        k--;
    }
    for(int i = 1; i <= k; i += 2){
        cout << x - i << " " << y << "\n";
        cout << x + i << " " << y << "\n";
    }
}

signed main(){
    fast;
    int t = 1;
    cin >> t;
    while(t--){solve();}
    return 0;
}