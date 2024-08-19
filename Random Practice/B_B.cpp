#include<bits/stdc++.h>
#define int long long int
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;

void solve(){

    int n;  cin >> n;
    vector<int> v(n);
    for(int i = 0; i < n; i++) cin >> v[i];
    int op = 0;
    while(1){
        for(int i = 0; i < n; i++){
            if(v[i] % 2 == 0){
                v[i] /= 2;
                continue;
            }
            else{
                cout << op;
                return;
            }
        }
        op++;
    }
    cout << op << "\n";
    return;
}

signed main(){
    fast;
    int t = 1;
    // cin >> t;
    while(t--){solve();}
    return 0;
}