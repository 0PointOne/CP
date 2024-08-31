#include<bits/stdc++.h>
#define int long long int
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;

int generateKey(int num1, int num2, int num3) {

    string a = to_string(num1);
    reverse(a.begin(), a.end());

    string b = to_string(num2);
    reverse(b.begin(), b.end());

    string c = to_string(num3);
    reverse(c.begin(), c.end());

    string ans = "";
    int sz1 = a.size(), sz2 = b.size(), sz3 = c.size();
    for(int i = 0; i < min({sz1, sz2, sz3}); i++){
        ans += min({a[i], b[i], c[i]});
    }

    reverse(ans.begin(), ans.end());
    int num4 = 0;
    for(int i = 0; i < ans.size(); i++){
        num4 = num4 * 10 + (ans[i] - '0');
    }
    if(num4 == 0) num4++; 
    return num4;
}

void solve(){

    int a, b, c;    cin >> a >> b >> c;
    cout << generateKey(a, b, c);
}

signed main(){
    fast;
    int t = 1;
    // cin >> t;
    while(t--){solve();}
    return 0;
}