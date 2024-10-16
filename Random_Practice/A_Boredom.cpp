#include<bits/stdc++.h>
#define int long long int
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;

void solve(){

    int n;   cin >> n;
    int M = 1e5;
    vector<int> fre(M + 5, 0), dp(M + 5, 0);
    for(int i = 0; i < n; i++) {
        int x;  
        cin >> x;
        fre[x]++;
    }

    for(int i = 1; i <= M; i++){
        dp[i] = dp[i-1];
        if(i > 1) dp[i] = max(dp[i], dp[i-2] + fre[i] * i);
        else      dp[i] = max(dp[i], fre[i] * i);
        
    }
    cout << dp[M] << "\n";
}

signed main(){
    fast;
    int t = 1;
    // cin >> t;
    while(t--){
        solve();
    }
    return 0;
}
