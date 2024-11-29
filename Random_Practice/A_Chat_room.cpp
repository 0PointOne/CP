#include<bits/stdc++.h>
#define int long long int
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL);
using namespace std;

void solve(){
    string s;   cin >> s;
    string a = "hello";

    int n = s.size(), i = 0, j = 0;
    while(i < n && j < a.size()){
        if(s[i] == a[j])  j++;
        i++;
    }
    cout << (j == a.size()  ?   "YES"   :   "NO") << "\n";
}

signed main(){
    fast;
    int t = 1;
    // cin >> t;
    while(t--){
        solve();
    }
}