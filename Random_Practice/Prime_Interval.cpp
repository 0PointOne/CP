#include<bits/stdc++.h>
#define int long long int
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;

void solve(){

    int l, r;   cin >> l >> r;

    auto tf = [](int n){
        if(n == 1) return false;
        for(int i = 2; i * i <= n; i++){
            if(n % i == 0) return false;
        }return true;
    };

    for(int i = l; i <= r; i++){
        if(tf(i)){
            cout << i << " ";
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