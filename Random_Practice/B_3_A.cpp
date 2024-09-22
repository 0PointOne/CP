#include<bits/stdc++.h>
#define int long long int
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;

void solve(){

    int m;  cin >> m;

    vector<int> ans;
    while(m){

        if(m == 0) break;

        for(int i = 11; i >= 0; i--){

            if(pow(3, i) <= m){
                ans.push_back(i);
                m -= pow(3, i);
                break;
            }
        }
    }

    cout << ans.size() << "\n";
    for(int i = 0; i < ans.size(); i++) cout << ans[i] << " ";
    cout << "\n";

}

signed main(){
    fast;
    int t = 1;
    //cin >> t;
    while(t--){solve();}
    return 0;
}