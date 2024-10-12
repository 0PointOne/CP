#include<bits/stdc++.h>
#define int long long int
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;

void solve(){

    int n;  cin >> n;
    vector<int> v(n);
    int and_ = (1 << 30) - 1, or_ = 0;
    for(int i = 0; i < n; i++){
        cin >> v[i];
        and_ &= v[i];
        or_ |= v[i];
    }

    if(and_ > 0){
        cout << 1 << "\n";
        return;
    }
    int group = 0;
    int x = or_;
    for(int i = 0; i < n; i++){
        x &= v[i];
        if(x == and_) group++, x = or_;
    }

    cout << group << "\n";

}

signed main(){
    fast;
    int t = 1;
    cin >> t;
    while(t--){solve();}
    return 0;
}