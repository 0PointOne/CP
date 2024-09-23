#include<bits/stdc++.h>
#define int long long int
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;

void solve(){

    int n, k;   cin >> n >> k;

    vector<int> v(n);
    for(int i = 0; i < n; i++)  cin >> v[i];

    if(v[0] == v.back()){
        int cnt = 0;
        for(int i = 0; i < n; i++)  if(v[i] == v.back()) cnt++;
        if(cnt >= k) cout << "YES\n";
        else{
            cout << "NO\n";
        }
    }
    else{
        int cnt_first = 0;
        int i = 0;
        for(; i < n; i++){
            if(v[i] == v[0]) cnt_first++;
            if(cnt_first == k) break;
        }
        int cnt_last = 0;
        for(int j = n-1; j >= i+1; j--){
            if(v[j] == v.back()) cnt_last++;
        }   
        cout << (cnt_first >= k && cnt_last >= k  ?  "YES\n"  :   "NO\n");
    }

}

signed main(){
    fast;
    int t = 1;
    cin >> t;
    while(t--){solve();}
    return 0;
}