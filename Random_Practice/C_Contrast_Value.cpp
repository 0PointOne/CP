#include<bits/stdc++.h>
#define int long long int
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;

void solve(){

    int n;  cin >> n;
    vector<int> v(n);
    for(int i = 0; i < n; i++)  cin >> v[i];

    int ans = 0;
    int flag = 0;

    for(int i = 1; i < n; i++){
        if(flag != 1 && v[i] < v[i-1]){
            flag = 1;
            ans++;
        }
        else if(flag != -1 && v[i] > v[i-1]){
            flag = -1;
            ans++;
        }
    }
    cout << ans + 1 << "\n";

}

signed main(){
    fast;
    int t = 1;
    cin >> t;
    while(t--){solve();}
    return 0;
}