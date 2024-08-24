#include<bits/stdc++.h>
#define int long long int
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;

void solve(){

    int n, l, r;    cin >> n >> l >> r;
    vector<int> v;
    v.push_back(l);

    for(int i = 2; i <= n; i++){
        if(l % i == 0) v.push_back(l);
        else{
            int k = ((l / i) + (l % i ? 1 : 0)) * i;
            if(k <= r) v.push_back(k);
            else break;
        }
    }
    if(v.size() == n){
        cout << "YES" << "\n";
        for(int i = 0; i < n; i++) cout << v[i] << " ";
        cout << "\n";
    }
    else cout << "NO" << "\n";

}

signed main(){
    fast;
    int t = 1;
    cin >> t;
    while(t--){solve();}
    return 0;
}