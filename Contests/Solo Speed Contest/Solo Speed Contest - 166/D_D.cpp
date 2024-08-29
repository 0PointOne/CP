#include<bits/stdc++.h>
#define int long long int
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;

void solve(){

    int n;  cin >> n;
    vector<int> v(n);
    for(int i = 0; i < n; i++)  cin >> v[i];

    int i = 0, j = n-1;
    while(i <= j){
        if(v[i] != v[j])  break;
        i++, j--;
    }
    if(i >= j){
        cout << 0 << "\n";
        return;
    }

    vector<int> diff;
    i = 0, j = n-1;
    while(i <= j){
        diff.push_back(v[j--] - v[i++]);
    }
    for(int i = 0; i < diff.size(); i++){
        if(diff[i] < 0){
            cout << -1 << "\n";
            return;
        }
        if(i+1 < diff.size() && diff[i] < diff[i+1]){
            cout << -1 << "\n";
            return;
        }
    }
    cout << diff[0] << "\n";

}

signed main(){
    fast;
    int t = 1;
    cin >> t;
    while(t--){solve();}
    return 0;
}