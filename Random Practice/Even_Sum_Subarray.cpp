#include<bits/stdc++.h>
#define int long long int
using namespace std;

void solve(){
    int n;  cin >> n;
    vector<int> v(n);
    for(int i = 0; i < n; i++)  cin >> v[i];

    int sum = accumulate(v.begin(), v.end(), 0);

    if(sum % 2 == 0){
        cout << n << "\n";
    }
    else{
        int l = 0;
        for(int i = 0; i < n; i++){
            if(v[i] & 1){
                break;
            }
            l++;
        }
        int r = 0;
        for(int i = n-1; i >= 0; i--){
            if(v[i] & 1){
                break;
            }
            r++;
        }
        // cout << l << " " << r << "\n";

        cout << n - min(l, r) - 1 << "\n";
    }
}

signed main(){
    
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);cout.tie(NULL);

    int t;
    cin >> t;
    while(t--){
        solve();
    }
    
    return 0;
}