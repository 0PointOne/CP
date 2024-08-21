#include<bits/stdc++.h>
#define int long long int
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;

void solve(){

    int n, c;   cin >> n >> c;
    vector<int> v(n+1);
    for(int i = 1; i <= n; i++){
        cin >> v[i];
        v[i] += i;
    }
    sort(v.begin(), v.end());

    int cnt = 0;
    for(int i = 1; i <= n; i++){
        if(v[i] <= c) cnt++, c -= v[i];
        else break;
    }

    cout << cnt << "\n";
}

signed main(){
    fast;
    int t = 1;
    cin >> t;
    while(t--){solve();}
    return 0;
}