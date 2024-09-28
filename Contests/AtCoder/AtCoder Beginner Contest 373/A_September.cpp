#include<bits/stdc++.h>
#define int long long int
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;

void solve(){

    int cnt = 0;
    int t = 12;
    int i = 1;
    while(i <= t){
        string s;   cin >> s;
        if(s.size() == i) cnt++;
        i++;
    }
    cout << cnt << '\n';

}

signed main(){
    fast;
    int t = 1;
    //cin >> t;
    while(t--){solve();}
    return 0;
}