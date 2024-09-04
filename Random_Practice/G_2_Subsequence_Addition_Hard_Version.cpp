#include<bits/stdc++.h>
#define int long long int
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;

void solve(){

    int n;  cin >> n;
    vector<int> v(n);
    for(int i = 0; i < n; i++)  cin >> v[i];

    sort(v.begin(), v.end());

    if(v[0] != 1){
        cout << "NO" << "\n";
        return;
    }

    int cnt = 1;
    for(int i = 1; i < n; i++){
        if(cnt >= v[i]) cnt += v[i];
        else{
            cout << "NO" << "\n";
            return;
        }
    }
    cout << "YES" << "\n";
}

signed main(){
    fast;
    int t = 1;
    cin >> t;
    while(t--){solve();}
    return 0;
}