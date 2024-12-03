#include<bits/stdc++.h>
#define int long long int
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL);
using namespace std;

void solve(){
    int n;  cin >> n;
    string s;    cin >> s;

    vector<int> v(27, 0);
    for(int i = 0; i < n; i++){
        v[s[i] - 'a']++;
    }

    int mn = INT_MAX, mx = INT_MIN;
    char mnChar = '*', mxChar = '*';
    for(int i = 0; i < 26; i++){
        if(v[i] > 0 && v[i] < mn){
            mn = v[i];
            mnChar = char(i + 'a');
        }
    }
    for(int i = 0; i < 26; i++){
        if(v[i] > 0 && v[i] > mx && char(i + 'a') != mnChar){
            mx = v[i];
            mxChar = char(i + 'a');
        }
    }
    if(mxChar == '*') mxChar = mnChar;
   
    for(int i = 0; i < n; i++){
        if(s[i] == mnChar){
            s[i] = mxChar;
            break;
        }
    }
    cout << s << "\n";

}

signed main(){
    fast;
    int t = 1;
    cin >> t;
    while(t--){
        solve();
    }
}