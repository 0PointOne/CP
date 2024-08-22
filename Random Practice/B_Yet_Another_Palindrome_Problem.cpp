#include<bits/stdc++.h>
#define int long long int
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;

void solve(){

    int n;  cin >> n;
    vector<int> v(n);
    map<int, int> fr;
    vector<pair<int, int> > pr;
    for(int i = 0; i < n; i++)  cin >> v[i], fr[v[i]]++, pr.push_back({v[i], i});

    bool isp = false;
    bool isTwo = false;
    for(auto it: fr){
        if(it.second >= 3){
            isp = true;
        }
        if(it.second == 2) isTwo =  true;
    }

    if(isp){
        cout << "YES" << "\n";
        return;
    }
    sort(pr.begin(), pr.end());
    for(int i = 0; i < n-1; i++){
        if(pr[i].first == pr[i+1].first && abs(pr[i].second - pr[i+1].second) > 1){
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