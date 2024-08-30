#include<bits/stdc++.h>
#define int long long int
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;

void solve(){

    int n;  cin >> n;
    int cnt = 0;
    while(n){
        if(n % 10 == 4 || n % 10 == 7) cnt++;
        n /= 10;
    }
    if(cnt == 7 || cnt == 4) cout << "YES" << "\n";
    else                  cout << "NO" << "\n";

}

signed main(){
    fast;
    int t = 1;
    // cin >> t;
    while(t--){solve();}
    return 0;
}