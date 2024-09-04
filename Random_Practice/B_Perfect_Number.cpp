#include<bits/stdc++.h>
#define int long long int
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;

void solve(){

    int n;  cin >> n;
    auto sum = [&](int n){
        int t = 0;
        while(n){
            t += n % 10;
            n /= 10;
        }
        return t == 10;
    };
    int i = 1;
    while(n > 0){
        if(sum(i)) n--;
        i++;
    }
    cout << i-1;
}

signed main(){
    fast;
    int t = 1;
    // cin >> t;
    while(t--){solve();}
    return 0;
}