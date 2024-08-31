#include<bits/stdc++.h>
#define int long long int
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;

void solve(){

    int n;  cin >> n;
    vector<int> v(n);
    for(int i = 0; i < n; i++)  cin >> v[i];

    int64_t ans = 2;
    while(ans){
        set<int> st;
        for(int i = 0; i < n; i++){
            st.insert(v[i] % ans);
        }
        if(st.size() == 2){
            cout << ans << "\n";
            return;
        }
        ans *= 2;
    }

}

signed main(){
    fast;
    int t = 1;
    cin >> t;
    while(t--){solve();}
    return 0;
}