#include<bits/stdc++.h>
#define int long long int
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;

void solve(){

    int a, b, c, d;         cin >> a >> b >> c >> d;
    int way = 0;

    if(a > c && b >= d) way += 2;
    else if(a >= c && b > d) way += 2;

    if(a > d && b >= c) way += 2;
    else if(a >= d && b > c) way += 2;

    cout << way << "\n";
}

signed main(){
    fast;
    int t = 1;
    cin >> t;
    while(t--){solve();}
    return 0;
}