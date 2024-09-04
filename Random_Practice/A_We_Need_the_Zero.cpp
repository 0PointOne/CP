#include<bits/stdc++.h>
#define int long long int
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;

void solve(){

    int n;  cin >> n;
    int a = 0;
    for(int i = 0; i < n; i++){
        int x;  cin >> x;
        a ^= x;
    }
    if(a == 0 || n & 1) cout << a << "\n";
    else cout << -1 << "\n"; 
}

signed main(){
    fast;
    int t = 1;
    cin >> t;
    while(t--){solve();}
    return 0;
}