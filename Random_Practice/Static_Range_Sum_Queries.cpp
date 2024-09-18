#include<bits/stdc++.h>
#define int long long int
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;

void solve(){

    int n, q;  cin >> n >> q;
    vector<int> pf(n+1);

    for(int i = 1; i <= n; i++){
        cin >> pf[i];
        pf[i] += pf[i-1];
    }


    while(q--){
        int a, b;   cin >> a >> b;
        cout << pf[b] - pf[a-1] <<  "\n";
    }

}

signed main(){
    fast;
    int t = 1;
    //cin >> t;
    while(t--){solve();}
    return 0;
}