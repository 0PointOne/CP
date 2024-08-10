#include<bits/stdc++.h>
#define int long long int
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;

void solve(){

    int n;  cin >> n;
    vector<string> v(n);
    int mx = 0;
    for(int i = 0; i < n; i++){
        cin >> v[i];
        if(v[i].size() > mx) mx = v[i].size();
    }

    for(int i = 0; i < mx; i++){
        string s = "";
        for(int j = n-1; j >= 0; j--){
            if(v[j].size() > i) s += v[j][i];
            else                  s += "*";     
        }
        if(v[0].size() <= i){
            while(s.back() == '*') s.pop_back();
        }
        cout << s << "\n";
    }

}

signed main(){
    fast;
    int t = 1;
    // cin >> t;
    while(t--){solve();}
    return 0;
}