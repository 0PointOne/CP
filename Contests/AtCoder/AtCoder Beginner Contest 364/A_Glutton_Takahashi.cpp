#include<bits/stdc++.h>
#define int long long int
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;

void solve(){

    int n;  cin >> n;
    vector<string> v(n);
    for(int i = 0; i < n; i++){
        cin >> v[i];
    }

    bool ist = false;
    for(int i = 1; i < n; i++){
        if(ist){
            cout << "No";
            return;
        }
        if(v[i] == "sweet" && v[i-1] == "sweet"){
            ist = true;
        }
    }
    cout << "Yes";

}

signed main(){
    fast;
    int t = 1;
    // cin >> t;
    while(t--){solve();}
    return 0;
}