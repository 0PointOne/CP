#include<bits/stdc++.h>
#define int long long int
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;

void solve(){

    map<int, int> mp;
    int n;  cin >> n;
    while(n--){
        int q;  cin >> q;
        if(q == 1){
            int x;  cin >> x;
            mp[x]++;
        }
        else if(q == 2){
            int x;  cin >> x;
            mp[x]--;
            if(mp[x] == 0) mp.erase(x);
        }
        else{
            cout << mp.size() << "\n";
        }
    }

}

signed main(){
    fast;
    int t = 1;
    // cin >> t;
    while(t--){solve();}
    return 0;
}