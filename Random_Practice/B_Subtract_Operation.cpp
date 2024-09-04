#include<bits/stdc++.h>
#define int long long int
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;

void solve(){

    int n, k;   cin >> n >> k;
    vector<int> v(n);
    for(int i = 0; i < n; i++)  cin >> v[i];

    sort(v.begin(), v.end());
    int i = 0, j = i+1;
    int sum = v[j] - v[i];

    while(i < n && j < n){

        if(sum > k){
            i++;
            if(i < n) sum = v[j] - v[i];
        }
        else if(sum < k){
            j++;
            if(j < n) sum = v[j] - v[i];
        }

        if(sum == k){
            cout << "YES" << "\n";
            return;
        }
    }
    cout << "NO" << "\n";

}

signed main(){
    fast;
    int t = 1;
    cin >> t;
    while(t--){solve();}
    return 0;
}