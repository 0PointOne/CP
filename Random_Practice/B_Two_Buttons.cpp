#include<bits/stdc++.h>
#define int long long int
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;

void solve(){

    int n, m;   cin >> n >> m;
    
    int op = 0;
    while(n != m){
        if(m < n){
            op += (n - m);
            break;
        }
        if(m & 1)  m++, op++;
        else{
            m /= 2;
            op++;
        }
    }
    cout << op << "\n";
}

signed main(){
    fast;
    int t = 1;
    //cin >> t;
    while(t--){solve();}
    return 0;
}