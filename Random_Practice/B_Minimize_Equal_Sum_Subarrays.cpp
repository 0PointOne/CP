#include<bits/stdc++.h>
#define int long long int
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;

void solve(){

    int n;  cin >> n;
    vector<int> v(n);
    for(int i = 0; i < n; i++){
        cin >> v[i];
    }
    vector<int> ans(n);
    for(int i = 0; i < n-1; i++){
        ans[i] = v[i+1];
    }
    ans.back() = v[0];

    for(int i = 0; i < n; i++)  cout << ans[i] << " ";
    cout << "\n";

}

signed main(){
    fast;
    int t = 1;
    cin >> t;
    while(t--){solve();}
    return 0;
}