#include<bits/stdc++.h>
#define int long long int
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;

void solve(){

    int n;  cin >> n;
    vector<int> v(n);
    for(int i = 0; i < n; i++)  cin >> v[i];

    int preBit = 31 - __builtin_clz(v[0]);
    for(int i = 0; i < n; i++){
        int bit = 31 - __builtin_clz(v[i]);
        if(bit != preBit)  preBit = bit;
        cout << (1 << preBit) << " ";
    }cout << "\n";

}

signed main(){
    fast;
    int t = 1;
    cin >> t;
    while(t--){solve();}
    return 0;
}