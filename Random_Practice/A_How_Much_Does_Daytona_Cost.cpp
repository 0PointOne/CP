#include<bits/stdc++.h>
#define int long long int
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;

void solve(){

    int n, k;   cin >> n >> k;
    bool isP = false;
    for(int i = 0; i < n; i++){
        int x;  cin >> x;
        if(x == k){
            isP = true;
        }
    }
    cout << (isP ?  "YES"  :  "NO") << "\n";

}

signed main(){
    fast;
    int t = 1;
    cin >> t;
    while(t--){solve();}
    return 0;
}