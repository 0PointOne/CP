#include<bits/stdc++.h>
#define int long long int
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;

void solve(){

    int n;  cin >> n;
    int even = 0, odd = 0, evenIdx = -1, oddIdx = -1;
    for(int i = 0; i < n; i++){
        int x;  cin >> x;
        if(x & 1) odd++, oddIdx = i+1;
        else      even++, evenIdx = i+1;
    }
    cout << (odd == 1 ? oddIdx  : evenIdx) << "\n";
}

signed main(){
    fast;
    int t = 1;
    // cin >> t;
    while(t--){solve();}
    return 0;
}