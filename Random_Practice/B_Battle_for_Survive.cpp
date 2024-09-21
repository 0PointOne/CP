#include<bits/stdc++.h>
#define int long long int
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;

void solve(){

    int n;  cin >> n;
    vector<int> v(n);

    for(int i = 0; i < n; i++)  cin >> v[i];

    if(n == 2) cout << v.back() - v[0] << "\n";
    else{
        int sum = accumulate(v.begin(), v.begin() + (n - 2), 0LL);

        cout << v.back() - (v[n-2] - sum) << "\n";
    }

}

signed main(){
    fast;
    int t = 1;
    cin >> t;
    while(t--){solve();}
    return 0;
}