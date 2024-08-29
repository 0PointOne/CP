#include<bits/stdc++.h>
#define int long long int
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;

void solve(){

    int n;  cin >> n;
    vector<int> v(n);
    for(int i = 0; i < n; i++)  cin >> v[i];

    int evenGcd = 0, oddGcd = 0;
    for(int i = 0; i < n; i++){
        if(i & 1) oddGcd = __gcd(oddGcd, v[i]);
        else      evenGcd = __gcd(evenGcd, v[i]);
    }

    bool even = true, odd = true;
    for(int i = 0; i < n; i ++){
        if(i & 1 && v[i] % evenGcd == 0) even = false;
        if((i % 2 == 0)  &&  (v[i] % oddGcd == 0))  odd = false;
    }

    if(!even & !odd) cout << 0 << "\n";
    else if(odd)     cout << oddGcd << "\n";
    else             cout << evenGcd << "\n";
}

signed main(){
    fast;
    int t = 1;
    cin >> t;
    while(t--){solve();}
    return 0;
}