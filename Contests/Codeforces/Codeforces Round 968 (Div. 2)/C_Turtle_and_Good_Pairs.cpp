#include<bits/stdc++.h>
#define int long long int
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;

void solve(){

    int n;  cin >> n;
    string s;   cin >> s;
    map<char, int> mp;
    for(int i = 0; i < n; i++)  mp[s[i]]++;

    vector<pair<char, int> > pr;
    for(auto it: mp){
        pr.push_back({it.second, it.first});
    }
    sort(pr.begin(), pr.end(), greater());

    string ans = "";
    while(1){
        if(ans.size() == n) break;
        for(auto it: mp){
            if(mp[it.first]){
                ans += it.first;
                mp[it.first]--;
            }
        }
    }

    cout << ans << "\n";
}

signed main(){
    fast;
    int t = 1;
    cin >> t;
    while(t--){solve();}
    return 0;
}