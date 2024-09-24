#include<bits/stdc++.h>
#define int long long int
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;

void solve(){

    int s, n;   cin >> s >> n;

    vector<pair<int, int> > v(n);
    for(int i = 0; i < n; i++){
        cin >> v[i].first >> v[i].second;
    }
    sort(v.begin(), v.end());

    for(int i = 0; i < n; i++){
        if(v[i].first >= s){
            cout << "NO\n";
            return;
        }
        s += v[i].second;
    }
    cout << "YES\n";

}

signed main(){
    fast;
    int t = 1;
    //cin >> t;
    while(t--){solve();}
    return 0;
}