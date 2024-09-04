#include<bits/stdc++.h>
#define int long long int
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;

void solve(){

    string s;   cin >> s;
    vector<int> fr(26, 0);

    int cnt = 0;
    for(int i = 0; i < s.size(); i++){
        if(fr[s[i] - 'a'] == 0) cnt++, fr[s[i] - 'a']++;
    }

    string a = "";
    for(int i = 0; i < cnt; i++)   a += s[i];
    int sz = a.size();
    
    int j = 0;
    for(int i = 0; i < s.size(); i++){
        if(j >= sz) j = 0;
        if(s[i] != a[j]){
            cout << "NO" << "\n";
            return;
        }
        j++;
    }
    cout << "YES" << "\n";
}

signed main(){
    fast;
    int t = 1;
    cin >> t;
    while(t--){solve();}
    return 0;
}