#include<bits/stdc++.h>
#define int long long int
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;
const int N = 1e6 + 5;

void solve(){

    vector<bool> prime(N + 1, true);
    prime[0] = prime[1] = false;
    for(int i = 2; i * i <= N; i++){
        if(prime[i]){
            for(int j = i * i; j <= N; j += i)   prime[j] = false;
        }
    }
    int n;  cin >> n;
    for(int i = 0; i < n; i++){
        int x;  cin >> x;
        int r = sqrt(x);
        cout << (r * r == x && prime[r]   ?   "YES\n"  :   "NO\n");
    }

}

signed main(){
    fast;
    int t = 1;
    //cin >> t;
    while(t--){solve();}
    return 0;
}