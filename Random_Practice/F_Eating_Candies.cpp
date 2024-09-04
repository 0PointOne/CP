#include<bits/stdc++.h>
#define int long long int
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;


void binarySearch__(int n, vector<int>& v){
    vector<int> pr(n+1);
    for(int i = 1; i <= n; i++){
        pr[i] = pr[i-1] + v[i-1];
    }

    int mx = 0;
    for(int i = n; i >= 1; i--){
        int idx = lower_bound(pr.begin(), pr.end(), pr.back() - pr[i-1]) - pr.begin();
        if(idx <= n && idx < i && pr[idx] == pr.back() - pr[i-1]){
            mx = max(n - i + 1 + idx, mx);
        }
    }
    cout << mx << "\n";
}

void twoPointer(int n, vector<int>& v){
    int ans = 0;
    int l = 0, r = n-1;
    int lSum = 0, rSum = 0;
    while(l <= r){

        if(lSum < rSum)      lSum += v[l++];
        else if(lSum > rSum) rSum += v[r--];
        
        if(lSum == rSum){
            ans = l + n - r - 1;
            if(l <= r) lSum += v[l++];
        }
    }

    cout << ans << "\n";
}

void solve(){

    int n;  cin >> n;
    vector<int> v(n);
    for(int i = 0; i < n; i++)  cin >> v[i];

    // twoPointer(n, v);
    binarySearch__(n, v);

}

signed main(){
    fast;
    int t = 1;
    cin >> t;
    while(t--){solve();}
    return 0;
}