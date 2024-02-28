#include<bits/stdc++.h>
#define endl "\n"
#define ll long long
#define s(a, b) a+b
#define v_all v.begin(), v.end()
#define mod 100000007
#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define print_v(v) for(auto it : v) cout << it << " "; cout << endl;
#define print_v_pair(v) for(auto it: v) cout << it.first << " " << it.second << endl;
#define input_v for(auto &it : v)   cin >> it;
using namespace std;

void solve(){
    
    ll n;   cin >> n;

    ll flag = 0, move = 0;
    while(n > 1){

        if(n > 1e16){
            cout << -1 << endl;
            return;
        }

        if(n % 6 == 0){
            n /= 6;
            flag = 0;
        }  
        else{
            n *= 2;
            flag++;
        }
        move++;
    }
    cout << (n == 1 ? move :  -1) << endl;
}

int main(){
    fast_io;

    int t = 1;
    cin >> t;
    while(t--){
        solve();
    }

    return 0;
}