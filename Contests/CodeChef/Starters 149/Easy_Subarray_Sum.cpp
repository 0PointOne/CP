#include<bits/stdc++.h>
#define int long long int
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;

void solve(){

    int n;  cin >> n;
    vector<int> v(n);
    int cnt = 0;
    int zero = 0;

    for(int i = 0; i < n; i++){
        cin >> v[i];
        if(v[i] < 0) cnt++;
        if(v[i] == 0) zero++;
    }

    int i = 0, j = n-1;
    for(; i < n; i++){
        if(v[i] > 0) break;
    }
    for(; j >= 0; j--){
        if(v[j] > 0) break;
    }

    if(i < j){
        int change = 0;
        for(int k = i; k <= j; k++){
            if(v[k] < 0) change++;
        }
        cout << change << "\n";
    }
    else cout << 0 << "\n";
}

signed main(){
    fast;
    int t = 1;
    cin >> t;
    while(t--){solve();}
    return 0;
}