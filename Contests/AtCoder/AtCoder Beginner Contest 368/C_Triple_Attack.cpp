#include<bits/stdc++.h>
#define int long long int
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;

void solve(){

    int n;  cin >> n;
    vector<int> v(n);
    for(int i = 0; i < n; i++)  cin >> v[i];

    int t = 0;
    for(int i = 0; i < n; i++){

        while(t % 3 && v[i] > 0){
            t++;
            if(t % 3 == 0) v[i] -= 3;
            else v[i]--;
        }

        if(v[i] < 0) continue;
        int x = v[i] / 5;
        v[i] -= 5 * x;
        t += 3 * x;
        
        while(v[i] > 0){
            t++;
            if(t % 3 ==0 ) v[i] -= 3;
            else v[i]--;
        }
    }
    cout << t << "\n";
}

signed main(){
    fast;
    int t = 1;
    // cin >> t;
    while(t--){solve();}
    return 0;
}