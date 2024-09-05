#include<bits/stdc++.h>
#define int long long int
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;

void solve(){

    int n, k;     cin >> n >> k;
    map<int, vector<int>> mp;
    
    for(int i = 0; i < n; i++){
        int x;  cin >> x;
        mp[x].push_back(i + 1);
    }

    int ans = n;
    for(int i = 1; i <= k; i++){

        int k = 0, mx = 0, mn = 0;
        for(int j = 0; j < mp[i].size(); j++){

            if(mp[i][j] - k - 1 >= mx)  mn = mx, mx = mp[i][j] - k - 1;
            else if(mp[i][j] - k - 1 >= mn)    mn = mp[i][j] - k - 1;
            k = mp[i][j];
        }

        if(n - k >= mx)  mn = mx,  mx = n - k;
        else if(n - k >= mn)   mn = n - k;
        
        ans = min(max(mx/2, mn), ans);
    }
    cout << ans << endl;

}

signed main(){
    fast;
    int t = 1;
    cin >> t;
    while(t--){solve();}
    return 0;
}