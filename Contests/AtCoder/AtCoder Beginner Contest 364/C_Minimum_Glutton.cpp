#include<bits/stdc++.h>
#define int long long int
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;

void solve(){

    int n, x, y;    cin >> n >> x >> y;
    vector<int> a(n), b(n);
    for(int i = 0; i < n; i++)  cin >> a[i];
    for(int i = 0; i < n; i++)  cin >> b[i];

    sort(a.begin(), a.end(), greater());
    sort(b.begin(), b.end(), greater());

    int a_cnt = 0, b_cnt = 0;
    for(int i = 0; i < n; i++){
        if(x < 0) break;
        a_cnt++;
        x -= a[i];
    }

    for(int i = 0; i < n; i++){
        if(y < 0) break;
        b_cnt++;
        y -= b[i];
    }

    cout << min(a_cnt, b_cnt);

}

signed main(){
    fast;
    int t = 1;
    // cin >> t;
    while(t--){solve();}
    return 0;
}