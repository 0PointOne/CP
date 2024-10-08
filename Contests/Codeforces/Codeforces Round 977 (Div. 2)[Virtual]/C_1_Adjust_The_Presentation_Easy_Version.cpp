#include<bits/stdc++.h>
#define int long long int
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;

void solve(){

    int n, m, q;    cin >> n >> m >> q;

    vector<int> a, b;
    unordered_map<int, int> mp;
    for(int i = 0; i < n; i++){
        int x;  cin >> x;
        if(mp[x] == 0){
            mp[x]++;
            a.push_back(x);
        }
    }
    mp.clear();
    for(int i = 0; i < m; i++){
        int x;  cin >> x;
        if(mp[x] == 0){
            mp[x]++;
            b.push_back(x);
        }
    }

    int i = 0, j = 0;
    while(i < a.size() && j < b.size()){
        if(a[i] != b[j]){
            cout << "TIDAK\n";
            return;
        }
        i++, j++;
    }
    cout << "YA\n";

}

signed main(){
    fast;
    int t = 1;
    cin >> t;
    while(t--){solve();}
    return 0;
}