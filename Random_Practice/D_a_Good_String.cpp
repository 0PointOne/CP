#include<bits/stdc++.h>
#define int long long int
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;

int mn(int l, int h, char ch, string& s){

    if(h - l == 1) return s[l] != ch;
    int mid = (l + h) / 2;

    int fa = 0, la = 0;
    for(int i = l; i < mid; i++)  fa += (s[i] != ch);
    for(int i = mid; i < h; i++)  la += (s[i] != ch);

    return min(la + mn(l, mid, ch+1, s), fa + mn(mid, h, ch+1, s));
}

void solve(){

    int n;      cin >> n;
    string s;   cin >> s;
    cout << mn(0, n, 'a', s) << "\n";
}

signed main(){
    fast;
    int t = 1;
    cin >> t;
    while(t--){solve();}
    return 0;
}