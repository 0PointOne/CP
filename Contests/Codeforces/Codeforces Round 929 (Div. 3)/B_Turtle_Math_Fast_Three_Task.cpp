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
    
    int n;  cin >> n;
    ll sum = 0;
    vector<int> v(n);
    for(int i = 0; i < n; i++){
        cin >> v[i];
        sum += v[i];
    }
    if(sum % 3 == 0){
        cout << 0 << endl;
        return;
    }
    else if(sum % 3 == 1){
        bool isPre = false;
        for(int i = 0; i < n; i++){
            if(v[i] % 3 == 1){
                cout << 1 << endl;
                return;
            }
        }

        if(!isPre)  cout << 2 << endl;
    }

    else if(sum % 3 == 2)   cout << 1 << endl;
    
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