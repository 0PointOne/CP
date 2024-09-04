#include<bits/stdc++.h>
#define int long long int
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;

void solve(){

    string s;   cin >> s;
    string a = "hello";
    int j = 0;
    for(int i = 0; i < s.size(); i++){
        if(a[j] == s[i]) j++;
        if(j == 5){
            cout << "YES";
            return;
        }
    }
    cout << "NO";
}

signed main(){
    fast;
    int t = 1;
    // cin >> t;
    while(t--){solve();}
    return 0;
}