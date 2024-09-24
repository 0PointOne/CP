#include<bits/stdc++.h>
#define int long long int
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;

void solve(){

    int n;  cin >> n;
    unordered_map<string, int> mp;
    for(int i = 0; i < n;i++){
        string x;   cin >> x;
        if(mp[x] == 0) mp[x]++, cout << "OK" << "\n";
        else{
            cout << x << mp[x] << "\n";
            mp[x]++;
        }
    }

}

signed main(){
    fast;
    int t = 1;
    //cin >> t;
    while(t--){solve();}
    return 0;
}