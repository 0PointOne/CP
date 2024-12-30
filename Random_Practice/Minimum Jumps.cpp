#include<bits/stdc++.h>
#define int long long int
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL);
using namespace std;

int minJumps(vector<int>& arr) {
    // code here
    int n = arr.size();
    int i = 0, mx_jump = arr[0], jumps = 0;
    
    while(i < n-1){
        if(mx_jump == 0) return -1;
        
        int mx_idx = -1, mx = 0;
        int j = i + 1;
        if(i+1+mx_jump >= n) return jumps+1;

        while(j < n && j <= i+mx_jump){
            
            int k = 0;
            if(arr[j] != 0)  k = arr[j] + (j - i - 1);
            if(mx <= k){
                mx = k;
                mx_idx = j;
            }
            j++;
        }
        
        mx_jump = arr[mx_idx];
        i = mx_idx;
        
        jumps++;
    }
    return jumps;
}

void solve(){
    int n;  cin >> n;
    vector<int> v(n);
    for(int i = 0; i < n; i++)  cin >> v[i];
    cout << minJumps(v) << "\n";
}

signed main(){
    fast;
    int t = 1;
    // cin >> t;
    while(t--){
        solve();
    }
}