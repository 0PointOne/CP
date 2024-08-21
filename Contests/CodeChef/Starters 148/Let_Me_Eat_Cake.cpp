#include<bits/stdc++.h>
#define int long long int
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;

void solve(){

    int a, b;   cin >> a >> b;
    int eat = 0;
    while(a != b){
        if(a > b){
            eat += a - (a / 2);
            a /= 2;
        }
        else{
            eat += b - (b / 2);
            b /= 2;
        }
    }
    cout << eat << "\n";

}

signed main(){
    fast;
    int t = 1;
    cin >> t;
    while(t--){solve();}
    return 0;
}