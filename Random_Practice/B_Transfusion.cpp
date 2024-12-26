#include<bits/stdc++.h>
#define int long long int
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL);
using namespace std;

void solve(){
    int n;  cin >> n;
    vector<int> v(n);
    for(int i = 0; i < n; i++)  cin >> v[i];

    int sum = accumulate(v.begin(), v.end(), 0LL);
    int each = sum / n;
    if( (each * n) != sum){
        cout << "NO\n";
        return;
    }

    for(int i = 0; i < n-2; i++){
        int diff = abs(v[i] - each);
        if(v[i] > each){
            v[i] -= diff;
            v[i+2] += diff;
        }
        else{
            v[i] += diff;
            v[i+2] -= diff;
        }
    }

    for(int i = 0; i < n; i++){
        if(v[i] != each){
            cout << "NO\n";
            return;
        }
    }cout << "YES\n";
}

signed main(){
    fast;
    int t = 1;
    cin >> t;
    while(t--){
        solve();
    }
}