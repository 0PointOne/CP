#include<bits/stdc++.h>
#define int long long int
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;

void solve(){

    string s;   cin >> s;

    string t = s;

    vector<int> zeroIdx, oneIdx;
    for(int i = 0; i < s.size(); i++){
        if(s[i] == '0') zeroIdx.push_back(i);
        else            oneIdx.push_back(i);
    }

    for(int i = 0; i < min(zeroIdx.size(), oneIdx.size()); i++){
        swap(s[zeroIdx[i]], s[oneIdx[i]]);
    }

    for(int i = 0; i < s.size(); i++){
        if(s[i] == t[i]){
            cout << s.size()-i << "\n";
            return;
        }
    }
    cout << 0 << "\n";
}

signed main(){
    fast;
    int t = 1;
    cin >> t;
    while(t--){solve();}
    return 0;
}