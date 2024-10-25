#include<bits/stdc++.h>
#define int long long int
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;

void solve(){

    int ans = 0;
    for(int i = 1; i <= 10; i++){
        for(int j = 1; j <= 10; j++){
            char x; cin >> x;
            if(x == 'X'){
                ans += min({i, j, 10-i+1, 10-j+1});
            }
        }
    }
    cout << ans << "\n";

}

signed main(){
    fast;
    int t = 1;
    cin >> t;
    while(t--){solve();}
    return 0;
}