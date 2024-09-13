#include<bits/stdc++.h>
#define int long long int
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;

void solve(){

    int a, b;   cin >> a >> b;
    int x, y;   cin >> x >> y;
    int m, n;   cin >> m >> n;

    int cnt = 0;
    set<pair<int, int> > st, st1;
    vector<pair<int, int > > dir = {{a, b}, {a, -b}, {-a, b}, {-a, -b}, {b, a}, {b, -a}, {-b, a}, {-b, -a}};

    for(auto [k, l]: dir){
        st.insert({k+x, l+y});
        st1.insert({m-k, n-l});
    }
    
    for(auto it: st){
        if(st1.find(it) != st1.end()) cnt++;
    }
    cout << cnt << "\n";
}

signed main(){
    fast;
    int t = 1;
    cin >> t;
    while(t--){solve();}
    return 0;
}