#include<bits/stdc++.h>
#define int long long int
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;

void solve(){

    int n;  cin >> n;
    string s;   cin >> s;
    bool isPre = false;
    int empty = 0;
    for(int i = 0; i < n; i++){
        if(i > 0 && i < n-1 && s[i-1] == '.' && s[i] == '.' && s[i+1] == '.'){
            cout << 2 << "\n";
            return;
        }
        if(s[i] == '.') empty++;
    }
    cout << empty << "\n";
}

signed main(){
    fast;
    int t = 1;
    cin >> t;
    while(t--){solve();}
    return 0;
}