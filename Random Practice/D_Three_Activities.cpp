#include<bits/stdc++.h>
#define int long long int
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;

void solve(){

    int n;  cin >> n;
    vector<pair<int, int> > a(n), b(n), c(n);

    for(int i = 0; i < n; i++)  cin >> a[i].first, a[i].second = i;
    for(int i = 0; i < n; i++)  cin >> b[i].first, b[i].second = i;
    for(int i = 0; i < n; i++)  cin >> c[i].first, c[i].second = i;

    sort(a.begin(), a.end(), greater());
    sort(b.begin(), b.end(), greater());
    sort(c.begin(), c.end(), greater());

    int mx = 0;
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            for(int k = 0; k < 3; k++){
                if(a[i].second != b[j].second && a[i].second != c[k].second && b[j].second != c[k].second){
                    mx = max(mx, a[i].first + b[j].first + c[k].first);
                }
            }
        }
    }
    cout << mx << "\n";

}

signed main(){
    fast;
    int t = 1;
    cin >> t;
    while(t--){solve();}
    return 0;
}