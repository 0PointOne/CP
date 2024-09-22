#include<bits/stdc++.h>
#define int long long int
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;

void solve(){

    int n;  cin >> n;
    vector<int> v(n);
    for(int i = 0; i < n; i++)  cin >> v[i];

    vector<int> ans(n);
    vector<int> build;
    for(int i = n-1; i >= 0; i--){
        ans[i] = build.size();

        while(build.size() && build.back() < v[i])  build.pop_back();
        build.push_back(v[i]);
    }

    for(int i = 0; i < n; i++){
        cout << ans[i] << " ";
    }cout << "\n";

}

signed main(){
    fast;
    int t = 1;
    //cin >> t;
    while(t--){solve();}
    return 0;
}