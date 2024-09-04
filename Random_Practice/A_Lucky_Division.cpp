#include<bits/stdc++.h>
#define int long long int
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;

void solve(){

    int n;  cin >> n;

    for(int i = 1; i <= n; i++){
        bool isLucky = true;
        int temp = i;
        while(temp){
            if(temp % 10 == 4 || temp % 10 == 7);
            else{
                isLucky = false;
                break;
            }
            temp /= 10;
        }
        if(isLucky && n % i == 0){
            cout << "YES";
            return;
        }
    }
    cout << "NO";
}

signed main(){
    fast;
    int t = 1;
    // cin >> t;
    while(t--){solve();}
    return 0;
}