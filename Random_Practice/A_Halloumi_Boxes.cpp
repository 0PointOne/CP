#include<bits/stdc++.h>
#define int long long int
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL);
using namespace std;

void solve(){
    int n, k;  cin >> n >> k;
    bool isS = true;
    vector<int> v(n);
    for(int i = 0; i < n; i++){
        cin >> v[i];
    }
    for(int i = 1; i < n; i++){
        if(v[i] < v[i-1]) isS = false;
    }

    cout << (((!isS) && (k == 1))   ?    "NO"   :   "YES") << "\n";
}

signed main(){
    fast;
    int t = 1;
    cin >> t;
    while(t--){
        solve();
    }
}