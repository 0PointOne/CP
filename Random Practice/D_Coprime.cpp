#include<bits/stdc++.h>
#define int long long int
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;

void solve(){

    int n;  cin >> n;
    vector<int> v(1005,-1);
    for(int i = 0; i < n; i++){
        int x;  cin >> x;
        v[x] = i+1;
    }

    int mx =  -1;
    for(int i = 0; i <= 1000; i++){
        if(v[i] == -1) continue;
        for(int j = 0; j <= 1000; j++){
            if(v[j] != -1 && __gcd(i, j) == 1){
                mx = max(mx, v[i]+v[j]);
            }
        }
    }
    cout << mx << "\n";
}

signed main(){
    fast;
    int t = 1;
    cin >> t;
    while(t--){solve();}
    return 0;
}