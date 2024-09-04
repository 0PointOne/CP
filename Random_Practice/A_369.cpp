#include<bits/stdc++.h>
#define int long long int
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;

void solve(){

    int a, b;
    cin >> a >> b;

    auto isPos = [&](int a, int b, int c){
        return b - a == c - b;
    };

    int cnt = 0;
    for(int i = -300; i <= 300; i++){
        if(isPos(a, b, i)) cnt++;
        else if(isPos(b, a, i)) cnt++;
        else if(isPos(a, i, b)) cnt++;
        else if(isPos(b, i, a)) cnt++;
        else if(isPos(i, a, b)) cnt++;
        else if(isPos(i, b, a)) cnt++;
    } 
    cout << cnt << "\n";

}

signed main(){
    fast;
    int t = 1;
    // cin >> t;
    while(t--){solve();}
    return 0;
}