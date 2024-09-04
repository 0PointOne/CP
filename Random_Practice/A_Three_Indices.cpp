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
    vector<int> v(n);
    input_v(v);


    vector<int> left_min(n, -1), right_min(n);
    left_min[0] = -1;
    left_min[n-1] = -1;
    right_min[0] = -1;
    right_min[n-1] = -1;

    int mn = INT_MAX, mn_idx = -1;
    for(int i = 1; i < n - 1; i++){

        if(v[i-1] < v[i] || v[i] > mn){
            if(v[i-1] < mn){
                mn = v[i-1];
                mn_idx = i-1;
                left_min[i] = mn_idx;
            }
            else{
                left_min[i] = mn_idx;
            }
        }
    }


    mn = INT_MAX, mn_idx = -1;
    for(int i = n-2; i >= 1; i--){

        if(v[i+1] < v[i] || v[i] > mn){
            if(v[i+1] < mn){
                mn = v[i+1];
                mn_idx = i+1;
                right_min[i] = mn_idx;
            }
            else{
                right_min[i] = mn_idx;
            }
        }
    }
    for(int i = 1; i < n-1; i++){
        if(left_min[i] != -1 && right_min[i] != -1 && left_min[i] < right_min[i]){
            cout << "YES" << endl;
            cout << left_min[i] + 1 << " " << i + 1 << " " << right_min[i] + 1 << endl;
            return;
        }    
    }
    cout << "NO" << endl;
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