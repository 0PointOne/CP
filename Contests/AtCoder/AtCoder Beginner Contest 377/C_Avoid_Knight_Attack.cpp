#include<bits/stdc++.h>
#define int long long int
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;

void solve(){

    int n, m;   cin >> n >> m;
    set<pair<int, int> > st;
    
    for(int i = 0; i < m; i++){
        int x, y;   cin >> x >> y;

        if(x <= n && x >= 1 && y <= n && y >= 1) st.insert({x, y});
        
        if(x+2 <= n && y + 1 <= n){
            st.insert({x+2, y+1});
        }
        if(x+1 <= n && y + 2 <= n){
            st.insert({x+1, y+2});
        }
        if(x-1 >= 1 && y + 2 <= n){
            st.insert({x-1, y+2});
        }
        if(x - 2 >= 1 && y + 1 <= n){
            st.insert({x-2, y+1});
        }
        if(x-2 >= 1 && y - 1 >= 1){
            st.insert({x-2, y-1});
        }
        if(x-1 >= 1 && y - 2 >= 1){
            st.insert({x-1, y-2});
        }
        if(x+1 <= n && y-2 >= 1){
            st.insert({x+1, y-2});
        }
        if(x+2 <= n && y-1 >= 1){
            st.insert({x+2, y-1});
        }
    }

    cout << (n * n) - st.size() << '\n';

}

signed main(){
    fast;
    int t = 1;
    //cin >> t;
    while(t--){solve();}
    return 0;
}