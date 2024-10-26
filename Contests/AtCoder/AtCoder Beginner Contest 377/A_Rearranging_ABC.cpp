#include<bits/stdc++.h>
#define int long long int
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;

void solve(){

    string s;   cin >> s;
    vector<bool> v(26);
    for(int i = 0; i < 3; i++){
        v[s[i]-'A'] = true;
    }
    for(int i = 0; i < 3; i++){
        if(!v[i]){
            cout << "No\n";
            return;
        }
    }
    cout << "Yes\n";
}

signed main(){
    fast;
    int t = 1;
    //cin >> t;
    while(t--){solve();}
    return 0;
}