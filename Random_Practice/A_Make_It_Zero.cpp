#include<bits/stdc++.h>
#define int long long int
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;

void solve(){

    int n;  cin >> n;
    vector<int> v(n);
    for(int i = 0; i < n; i++)  cin >> v[i];

    if(n & 1){
        cout << 4 << "\n";
        cout << 2 << " " << n << "\n";
        cout << 2 << " " << n << "\n";
        cout << 1 << " " << 2 << "\n";
        cout << 1 << " " << 2 << "\n";
    }
    else{
        cout << 2 << "\n";
        cout << 1 << " " << n << "\n";
        cout << 1 << " " << n << "\n";
    }

}

signed main(){
    fast;
    int t = 1;
    cin >> t;
    while(t--){solve();}
    return 0;
}