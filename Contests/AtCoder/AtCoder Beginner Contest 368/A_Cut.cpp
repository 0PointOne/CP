#include<bits/stdc++.h>
#define int long long int
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;

void solve(){

    int n, k;   cin >> n >> k;
    vector<int> v(n);
    for(int i = 0; i < n; i++)  cin >> v[i];
    for(int i = n-k; i < n; i++) cout << v[i] << " ";
    for(int i = 0; i < n-k; i++) cout << v[i] << " ";

}

signed main(){
    fast;
    int t = 1;
    // cin >> t;
    while(t--){solve();}
    return 0;
}