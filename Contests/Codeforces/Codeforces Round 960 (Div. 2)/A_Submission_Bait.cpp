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
    vector<pair<int, int> > fr;
    for(auto it: mp){
        fr.push_back({it.first, it.second});
    }

    sort(fr.begin(), fr.end(), greater());
    for(auto it: fr){
        if(it.second & 1){
            cout << "YES" << "\n";
            return;
        }
    }
    cout << "NO" << "\n";
}

signed main(){
    fast;
    int t = 1;
    cin >> t;
    while(t--){solve();}
    return 0;
}