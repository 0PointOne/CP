#include<bits/stdc++.h>
#define int long long int
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;

vector<int> getFinalState(vector<int>& v, int k, int m) {
    vector<pair<int, int> > pr;
    for(int i = 0; i < v.size(); i++) pr.push_back({v[i], i});

    while(k--){
        sort(pr.begin(), pr.end());
        pr[0].first *= m;
    }
    for(int i = 0; i < v.size(); i++){
        v[pr[i].second] = pr[i].first;
    }
    return v;
}

void solve(){

    int n;  cin >> n;
    vector<int> v(n);
    for(int i = 0; i < n; i++)  cin >> v[i];
    int k, m;   cin >> k >> m;
    vector<int> ans = getFinalState(v, k, m);
    for(int i = 0; i < n; i++) cout << ans[i] << " ";
}

signed main(){
    fast;
    int t = 1;
    // cin >> t;
    while(t--){solve();}
    return 0;
}