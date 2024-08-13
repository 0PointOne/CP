#include<bits/stdc++.h>
#define int long long int
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;

void ans(unordered_map<int, vector<int>>& mp, string& s){
    bool isf = true;
    map<char, int> fr;
    for(int i = 0; i < s.size(); i++) fr[s[i]]++;
    for(auto it: mp){
        for(int i = 0; i < it.second.size()-1; i++){
            if(s[it.second[i]] != s[it.second[i+1]]){
                cout << "NO" << "\n";
                return;
            }
        }
    }

    if(fr.size() != mp.size()){
        cout << "NO" << "\n";
    }else cout << "YES" << "\n";
}

void solve(){

    int n;  cin >> n;
    unordered_map<int, vector<int>> mp;
    for(int i = 0; i < n; i++){
        int x;  cin >> x;
        mp[x].push_back(i);
    }

    int m;  cin >> m;
    while(m--){
        string s;   cin >> s;
        if(n != s.size()){
            cout << "NO" << "\n";
            continue;
        }
        ans(mp, s);
    }

}

signed main(){
    fast;
    int t = 1;
    cin >> t;
    while(t--){solve();}
    return 0;
}