#include<bits/stdc++.h>
#define int long long int
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;

void solve(){

    int a, b, n;      cin >> a >> b >> n;
    
    int sum = 0;
    for(int i = 0; i < n; i++){
        sum += b - 1;
        int x;  cin >> x;
        b = min(a, 1 + x);
    }
    sum += b;
    cout << sum << "\n";

}

signed main(){
    fast;
    int t = 1;
    cin >> t;
    while(t--){solve();}
    return 0;
}