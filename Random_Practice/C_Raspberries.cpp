#include<bits/stdc++.h>
#define int long long int
#define MOD 1000000007
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;

void solve(){

    int n, k;   cin >> n >> k;

    vector<int> mod(6);
    vector<bool> Div(6);

    int cntEven = 0;
    for(int i = 0; i < n; i++){
        int x;  cin >> x;
        if(x % 2 == 0) cntEven++;
        for(int j = 2; j <= 5; j++){
            mod[j] = max(mod[j], x % j);
            if(x % j == 0) Div[j] = true;
        }
    }
    if(Div[k]) cout << 0 << "\n";
    else{
        if(k == 4){
            if(cntEven >= 2 || mod[k] == 0) cout << 0 << "\n";
            else if(cntEven == 1) cout << 1 << "\n";
            else cout << (k - mod[k] == 1  ? 1 : 2) << "\n";
        }
        else cout << k - mod[k] << "\n";
    }
}

signed main(){
    fast;
    int t = 1;
    cin >> t;
    while(t--){solve();}
    return 0;
}