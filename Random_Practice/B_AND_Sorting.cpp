#include<bits/stdc++.h>
#define int long long int
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;

void solve(){

    int n;  cin >> n;
    vector<int> v(n);
    for(int i = 0; i < n; i++)  cin >> v[i];
    int mx = (1 << 31) - 1;
    for(int i = 0; i < n; i++){
        while(v[i] != i){
            int x = v[v[i]] & v[i];
            mx = mx & x;
            swap(v[v[i]], v[i]);
        }
    }
    cout << mx << "\n";
}

signed main(){
    fast;
    int t = 1;
    cin >> t;
    while(t--){solve();}
    return 0;
}