#include<bits/stdc++.h>
#define int long long int
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;

void solve(){

    char a, b, c;   cin >> a >> b >> c;
    
    int x = 3, y = 3, z = 3;
    if(a == '<') x--;
    if(a == '>') y--;
    if(b == '<') x--;
    if(b == '>') z--;
    if(c == '<') y--;
    if(c == '>') z--;


    if(x == 2) cout << 'A';
    else if(y == 2) cout << 'B';
    else if(z == 2) cout << 'C';
}

signed main(){
    fast;
    int t = 1;
    //cin >> t;
    while(t--){solve();}
    return 0;
}