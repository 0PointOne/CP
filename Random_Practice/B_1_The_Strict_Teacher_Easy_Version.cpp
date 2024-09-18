#include<bits/stdc++.h>
#define int long long int
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;

void solve(){

    int n, m, q;    cin >> n >> m >> q;
    
    vector<int> v(m);
    for(int i = 0; i < m; i++)  cin >> v[i];
    sort(v.begin(), v.end());

    while(q--){
        int po; cin >> po;
        int idx = lower_bound(v.begin(), v.end(), po) - v.begin();

        if(v[idx] == po)   cout << 0 << "\n";
        else if(idx == m){
            cout << n - v.back() << "\n";
        }
        else if(idx == 0){
            cout << v[0] - 1 << "\n";
        }
        else{
            cout << (v[idx] - po + po - v[idx-1]) / 2 << "\n";

        }
    }

}

signed main(){
    fast;
    int t = 1;
    cin >> t;
    while(t--){solve();}
    return 0;
}