#include<bits/stdc++.h>
#define int long long int
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;

void solve(){

    int n, x;  cin >> n >> x;
    vector<int> v(n), copy(n);
    for(int i = 0; i < n; i++) cin >> v[i];

    if(x == 1){
        copy = v;
        sort(copy.begin(), copy.end());
        cout << (copy == v  ?  "YES"  : "NO") << "\n";
    }
    else cout << "YES\n";

}

signed main(){
    fast;
    int t = 1;
    cin >> t;
    while(t--){solve();}
    return 0;
}