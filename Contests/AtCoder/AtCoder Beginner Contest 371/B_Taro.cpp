#include<bits/stdc++.h>
#define int long long int
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;

void solve(){

    int n, m;   cin >> n >> m;
    vector<bool> isE(n+1);

    while(m--){
        int x;
        char gen;   cin >> x >> gen;

        if(isE[x]) cout << "No\n";
        else{
            if(gen == 'M'){
                isE[x] = true;
                cout << "Yes\n";
            }
            else cout << "No\n";
        }
    }

}

signed main(){
    fast;
    int t = 1;
    //cin >> t;
    while(t--){solve();}
    return 0;
}