#include<bits/stdc++.h>
#define int long long int
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;


void solve(){

    int n;  cin >> n;
    map<int, int> mp;
    for(int i = 0; i < n; i++){
        int x;  cin >> x;
        mp[x]++;
    }
    vector<int> v;
    for(auto it: mp){
        v.push_back(it.second);
    }
    sort(v.begin(), v.end(), greater());

    int mx = 0;
    int cnt = 0;
    for(int i = 0; i < v.size(); i++){
        cnt += v[i];

        mx = max(mx, (cnt / (i+1)) * (i+1));
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