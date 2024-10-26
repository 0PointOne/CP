#include<bits/stdc++.h>
#define int long long int
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;

void solve(){

    int n;  cin >> n;
    int mxA = 0, mxB = 0;
    while(n--){
        int x, y;   cin >> x >> y;
        mxA = max(mxA, x);
        mxB = max(mxB, y);
    }

    cout << 2 * (mxA + mxB) << "\n";

}

signed main(){
    fast;
    int t = 1;
    cin >> t;
    while(t--){solve();}
    return 0;
}