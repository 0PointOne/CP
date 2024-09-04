#include<bits/stdc++.h>
#define int long long int
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;

void solve(){

    string s;   cin >> s;
    int l = 0, r = s.size()-1;
    while(l <= r){
        if(s[l++] != s[r--]){
            cout << "No" << "\n";
            return;
        }
    }
    cout << "Yes" << "\n"; 
}

signed main(){
    fast;
    int t = 1;
    cin >> t;
    while(t--){solve();}
    return 0;
}