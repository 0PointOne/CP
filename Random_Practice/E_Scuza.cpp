#include<bits/stdc++.h>
#define int long long int
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;

void solve(){

    int n, m;   cin >> n >> m;
    vector<int> v, a(n), b(m);

    int mx = 0;
    for(int i = 0; i < n; i++){
        cin >> a[i];
        mx = max(mx, a[i]);
        if(i != 0)  a[i] += a[i-1];
        v.push_back(mx);
    }

    for(int i = 0; i < m; i++){
        cin >> b[i];
        int idx = upper_bound(v.begin(), v.end(), b[i]) - v.begin();
        if(idx == 0){
            cout << "0 ";
        }
        else  cout << a[idx-1] << " ";
    }cout << "\n";

}

signed main(){
    fast;
    int t = 1;
    cin >> t;
    while(t--){solve();}
    return 0;
}