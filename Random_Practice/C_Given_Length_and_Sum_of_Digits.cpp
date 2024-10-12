#include<bits/stdc++.h>
#define int long long int
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;

void solve(){

    int n, s;   cin >> n >> s;
    string a = "";
    if((s == 0 && n > 1) || (n * 9 < s)){
        cout << -1 << " " << -1 << "\n";
        return;
    }

    int i = 1;
    int copy = s;
    while(s){
        int k = min(s, 9LL);
        s -= k;
        a += ('0' + k);
    }
    for(int i = a.size(); i < n; i++) a += '0';


    s = copy;
    string b(n, '0');
    b[0] = '1', s--;
    for(int i = n-1; i >= 0; i--){
        int k = min(s, 9LL);
        b[i] += k;
        s -= k;
    }

    cout << b << " " << a << "\n";

}

signed main(){
    fast;
    int t = 1;
    //cin >> t;
    while(t--){solve();}
    return 0;
}