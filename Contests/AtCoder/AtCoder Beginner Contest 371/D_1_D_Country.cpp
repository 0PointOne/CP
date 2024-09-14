#include<bits/stdc++.h>
#define int long long int
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;

void solve(){

    int n;  cin >> n;
    
    vector<int> v(n);
    for(int i = 0; i < n; i++)   cin >> v[i];

    vector<int> pf(n+1);
    for(int i = 1; i <= n; i++){
        cin >> pf[i];
        pf[i] += pf[i-1];
    }

    int q;  cin >> q;
    while(q--){
        int a, b;   cin >> a >> b;

        if(a == b){
            if(binary_search(v.begin(), v.end(),a)){
                int idx = lower_bound(v.begin(), v.end(), a) - v.begin();
                cout << pf[idx+1] - pf[idx] << "\n";
            }
            else cout << 0 << "\n";
            continue;
        } 

        int idx = lower_bound(v.begin(), v.end(), a) - v.begin();
        int idx2 = lower_bound(v.begin(), v.end(), b) - v.begin() - 1;
        if(binary_search(v.begin(), v.end(),b))    idx2++;
        
        if(idx > idx2) cout << 0 << "\n";
        else{
            if(idx < 0) cout << pf[idx2+1] - 0 << "\n";
            else  cout << pf[idx2+1] - pf[idx] << "\n";
        }

    }

}

signed main(){
    fast;
    int t = 1;
    //cin >> t;
    while(t--){solve();}
    return 0;
}