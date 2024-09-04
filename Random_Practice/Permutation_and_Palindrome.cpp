#include<bits/stdc++.h>
#define int long long int
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;

void solve(){
    string s;   cin >> s;
    int n = s.size();

    map<int, vector<int>> fr;
    for(int i = 0; i < n; i++){
        fr[s[i] - 'a'].push_back(i+1);
    }
    int odd = 0;
    for(auto it: fr){
        if(it.second.size() & 1) odd++;
    }

    if( ((n & 1) &&  odd == 1) || ((n % 2 == 0) && odd == 0));
    else{
        cout << -1 << "\n";
        return;
    }
    vector<int> v(n, 0);

    if(n & 1){
        int l = 0, r = n-1;
        for(auto it: fr){
            if(!(it.second.size() & 1)){
                for(int i = 0; i < it.second.size(); i += 2){
                    v[l++] = it.second[i];
                    v[r--] = it.second[i+1];
                }
            }
        }
        for(auto it: fr){
            if(it.second.size() & 1){
                int i = 0;
                for(; i < it.second.size(); i += 2){
                    v[l++] = it.second[i];
                    if(i+1 < it.second.size()) v[r--] = it.second[i+1];
                }
            }
        }
    }
    else{
        int l = 0, r = n-1;
        for(auto it: fr){
            for(int i = 0; i < it.second.size(); i += 2){
                v[l++] = it.second[i];
                v[r--] = it.second[i+1];
            }
        }
    }
    for(int i = 0; i < n; i++) cout << v[i] << " ";
    cout << "\n";
}


signed main(){
    fast;
    int t = 1;
    cin >> t;
    while(t--){solve();}
    return 0;
}