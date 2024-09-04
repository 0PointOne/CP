#include<bits/stdc++.h>
#define int long long int
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;

void solve(){

    int n;  cin >> n;
    int sum = 0;
    bool isZ = false;
    int mn = INT_MAX, neg = 0;
   
    for(int i = 0; i < n; i++){
        int x;  cin >> x;
        if(x < 0) x *= -1, neg++;
        if(isZ) isZ = true;
        mn = min(mn, x);
        sum += x;
    }
    if(isZ) cout << sum << "\n";
    else if(neg & 1) cout << sum - (2 * mn) << "\n";
    else cout << sum << "\n";
}

signed main(){
    fast;
    int t = 1;
    cin >> t;
    while(t--){solve();}
    return 0;
}