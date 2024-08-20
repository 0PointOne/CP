#include<bits/stdc++.h>
#define int long long int
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;

void solve(){

    int n;  cin >> n;
    if(n % 2 == 0){
        cout << -1 << "\n";
        return;
    }
    vector<int> v(n);
    int l = 0, r = n-1;
    for(int i = 1; i <= n; i++){
        if(i & 1) v[l++] = i;
        else v[r--] = i;
    }
    for(int i = 0; i < n; i++) cout << v[i] << " ";
    cout << "\n";

}

signed main(){
    fast;
    int t = 1;
    cin >> t;
    while(t--){solve();}
    return 0;
}