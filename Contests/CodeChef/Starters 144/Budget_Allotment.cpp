#include<bits/stdc++.h>
#define int long long int
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;

void solve(){

    int n, x;   cin >> n >> x;

    vector<int> v(n);
    int ex = 0;
    for(int i = 0; i < n; i++){
        cin >> v[i];
        ex += (v[i] > x  ?  v[i] - x : 0);
    }
    sort(v.begin(), v.end(), greater());

    int cnt = 0;
    for(int i = 0; i < n; i++){
        if(v[i] >= x) cnt++;
        else if(v[i] + ex >= x){
            cnt++;
            ex -= (x - v[i]);
        }
        else break;
    }
    cout << cnt << "\n";

}

signed main(){
    fast;
    int t = 1;
    cin >> t;
    while(t--){solve();}
    return 0;
}