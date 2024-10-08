#include<bits/stdc++.h>
#define int long long int
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;

void solve(){

    int n, k;   cin >> n >> k;
    
    vector<int> v(n);
    for(int i = 0; i < n; i++)  cin >> v[i];
    sort(v.begin(), v.end());

    map<int ,int> mp1;
    for(int i = 0; i < n; i++)   mp1[v[i]]++;
    
    unordered_map<int, int> mp;
    int mx = 0;
    while(true){

        if(mp1[mx] > 0){
            mp1[mx]--;
            mp[mx % k] += mp1[mx];
            mx++;
        }
        
        else if(mp[mx % k] > 0){
            mp[mx % k]--;
            mx++;
        }
        else break;
    }

    cout << mx << "\n";
}

signed main(){
    fast;
    int t = 1;
    cin >> t;
    while(t--){solve();}
    return 0;
}