#include<bits/stdc++.h>
#define int long long int
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;

void solve(){

    int l = 1, r = 1000000;

    int ans = -1;
    while(l <= r){
        int mid = l + (r - l) / 2;

        cout << mid << "\n";
        cout << flush;

        string s;   cin >> s;
        if(s == "<"){
            r = mid - 1;
        }
        else{
            ans = max(ans, mid);
            l = mid + 1;
        }
    }

    cout << "! " << ans << "\n";
    cout << flush;

}

signed main(){
    fast;
    int t = 1;
    //cin >> t;
    while(t--){solve();}
    return 0;
}