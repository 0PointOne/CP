#include<bits/stdc++.h>
#define int long long int
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;

void solve(){

    int n;  cin >> n;
    int sum = 0;
    for(int i = 0; i < n-1; i++){
        int x;  cin >> x;
        sum += x;
    }
    cout << -sum << '\n';

}

signed main(){
    fast;
    int t = 1;
    cin >> t;
    while(t--){solve();}
    return 0;
}