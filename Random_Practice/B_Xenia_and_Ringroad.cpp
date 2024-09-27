#include<bits/stdc++.h>
#define int long long int
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;

void solve(){

    int n, m;   cin >> n >> m;

    int ans = 0;
    int sum = 0;
    for(int i = 0; i < m; i++){
        int x;  cin >> x;
        
        if(sum <= x){
            ans += (x - sum);
            sum += (x - sum);
        }
        else{
            ans += (n - sum);
            ans += x;
            sum = x;
        }
    }

    cout << ans-1 << "\n";
}

signed main(){
    fast;
    int t = 1;
    //cin >> t;
    while(t--){solve();}
    return 0;
}