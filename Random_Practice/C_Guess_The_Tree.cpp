#include<bits/stdc++.h>
#define int long long int
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;

void solve(){

    int n;  cin >> n;
    vector<int> ans(n, -1);
    for(int i = 1; i < n; i++){
        int j = 0;
        while(1){
            cout << "? " << i+1 << " " << j+1 << "\n";
            cout.flush();


            int x;  cin >> x;
            if(x-1 == i) break;

            j = x-1;
        }
        ans[i] = j;
    }

    cout << "! ";
    cout.flush();
    for(int i = 1; i < n; i++) cout << i+1 << " " << ans[i] + 1 << " ";
    cout << "\n";
    cout.flush();


}

signed main(){
    fast;
    int t = 1;
    cin >> t;
    while(t--){solve();}
    return 0;
}