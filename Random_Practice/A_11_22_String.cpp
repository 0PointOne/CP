#include<bits/stdc++.h>
#define int long long int
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL);
using namespace std;

void solve(){
    int n;  cin >> n;
    string s;   cin >> s;
    bool ist = true;
    if(n % 2 == 0) ist = false;

    for(int i = 0; i < ((n+1)/2) - 1; i++){
        if(s[i] != '1') ist = false;
    }
    int mid = ((n+1)/2) - 1;
    if(s[mid] != '/') ist = false;
    for(int i = ((n+1)/2); i < n; i++){
        if(s[i] != '2') ist = false;
    }

    cout << (ist ? "Yes"  :  "No") << "\n";

}

signed main(){
    fast;
    int t = 1;
    // cin >> t;
    while(t--){
        solve();
    }
}