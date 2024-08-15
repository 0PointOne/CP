#include<bits/stdc++.h>
#define int long long int
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;

void solve(){

    int n;  cin >> n;
    vector<int> v(3, 0);
    for(int j = 0; j < n; j++){
        for(int i = 0; i < 3; i++){
            int x;
            cin >> x, v[i] += x;
        }
    }
    for(int i = 0; i < 3; i++){
        if(v[i] != 0){
            cout << "NO" << "\n";
            return;
        }
    }cout << "YES";
}

signed main(){
    fast;
    int t = 1;
    // cin >> t;
    while(t--){solve();}
    return 0;
}