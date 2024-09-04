#include<bits/stdc++.h>
#define int long long int
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;

void solve(){

    int a, b;   cin >> a >> b;
    for(int i = a; i <= b; i++){
        int t = i;
        int sum = 0;
        while(t){
            sum += pow(t % 10, 4);
            t /= 10;
        }
        if(i == sum) cout << i << " ";
    }

}

signed main(){
    fast;
    int t = 1;
    // cin >> t;
    while(t--){solve();}
    return 0;
} 