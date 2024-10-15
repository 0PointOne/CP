#include<bits/stdc++.h>
#define int long long int
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;

void solve(){

    int n;  cin >> n;

    for(int i = 0; i < 20; i++){

        if(n % 11 == 0){
            cout << "YES\n";
            return;
        }
        n -= 111;
        if(n < 0) break;
    }

    cout << "NO\n";

}

signed main(){
    fast;
    int t = 1;
    cin >> t;
    while(t--){solve();}
    return 0;
}