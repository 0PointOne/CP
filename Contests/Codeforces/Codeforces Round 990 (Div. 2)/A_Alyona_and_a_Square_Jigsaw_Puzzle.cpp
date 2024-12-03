#include<bits/stdc++.h>
#define int long long int
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL);
using namespace std;

void solve(){
    int n;  cin >> n;

    int cnt = 0, sum = 0;
    int d = 1;
    for(int i = 0; i < n; i++){
        int x;  cin >> x;
        sum += x;
        if(sum >= (d * d)){
            while(sum > (d * d)) d += 2;
            if(sum == (d * d)) cnt++;
        }
    }
    cout << cnt << "\n";
}

signed main(){
    fast;
    int t = 1;
    cin >> t;
    while(t--){
        solve();
    }
}