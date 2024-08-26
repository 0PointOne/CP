#include<bits/stdc++.h>
#define int long long int
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;

void solve(){

    int n;  cin >> n;
    map<int, int> mp;
    for(int i = 0; i < n; i++){
        int x;  cin >> x;
        mp[x]++;
    }

    int mx = INT_MIN;
    for(auto it: mp){
        if(it.second > mx) mx = it.second;
    }
    cout << n - mx << "\n";
}

signed main(){
    fast;
    int t = 1;
    cin >> t;
    while(t--){solve();}
    return 0;
}