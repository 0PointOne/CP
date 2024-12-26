#include<bits/stdc++.h>
#define int long long int
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL);
using namespace std;

void solve(){
    string s;   cin >> s;
    
    int sum = 0;
    int cnt_2 = 0, cnt_3 = 0;
    for(int i = 0; i < s.size(); i++){
        sum += (s[i] - '0');
        if(s[i] == '2') cnt_2++;
        else if(s[i] == '3') cnt_3++;
    }
    
    for(int i = 0; i <= cnt_2; i++){
        int k = (sum + (i * 2)) % 9;
        if((k % 9 == 0) || (cnt_3 && (k % 9 == 3)) || (cnt_3 >= 2 && (k % 9 == 6))){
            cout << "YES\n";
            return;
        }
    }
    cout << "NO\n";
    
}

signed main(){
    fast;
    int t = 1;
    cin >> t;
    while(t--){
        solve();
    }
}