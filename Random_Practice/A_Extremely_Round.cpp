#include<bits/stdc++.h>
#define int long long int
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;

void solve(vector<int> & v){
    int n;  cin >> n;
    cout << v[n] << "\n";
}

signed main(){
    fast;
    int t = 1;
    cin >> t;
    vector<int> v(1e6);
    int digit = 0;
    for(int i = 1; i < 1e6; i++){
        int cnt = 0;
        int k = i;
        while(k){
            int rem = k % 10;
            if(rem >= 1 && rem <= 9) cnt++;
            k /= 10;
        }
        if(cnt == 1) digit++;
        v[i] = digit;
    }
    while(t--){solve(v);}
    return 0;
}