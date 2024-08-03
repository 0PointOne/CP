#include<bits/stdc++.h>
#define int long long int
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;

void solve(){

    int n, m;   cin >> n >> m;
    vector<int> v(n);
    for(int i = 0; i < n; i++)  cin >> v[i];

    int sum = 0;
    for(int i = 0; i < n; i++) sum += v[i];
    if(sum <= m){
        cout << "infinite";
        return;
    }

    auto isPos = [&](int x){
        int total = 0;
        for(int i = 0; i < n; i++){
            total += min(x, v[i]);
        }
        return total <= m;
    };

    int l = 0, h = sum;
    int ans = 0;
    while(l <= h){
        int mid = l + (h - l) / 2;
        if(isPos(mid)){
            ans = mid;
            l = mid + 1;
        }
        else h = mid - 1;
    }
    cout << ans << "\n";
}

signed main(){
    fast;
    int t = 1;
    // cin >> t;
    while(t--){solve();}
    return 0;
}