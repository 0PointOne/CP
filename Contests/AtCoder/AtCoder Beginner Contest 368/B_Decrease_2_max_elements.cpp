#include<bits/stdc++.h>
#define int long long int
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;

void solve(){

    int n;  cin >> n;
    vector<int> v(n);
    for(int i = 0; i < n; i++)  cin >> v[i];
    int op = 0;
    sort(v.begin(), v.end(), greater());
    while(1){
        op++;
        v[0]--, v[1]--;
        sort(v.begin(), v.end(), greater());
        if(v[1] < 1) break;
    }
    cout << op << "\n";
}

signed main(){
    fast;
    int t = 1;
    // cin >> t;
    while(t--){solve();}
    return 0;
}