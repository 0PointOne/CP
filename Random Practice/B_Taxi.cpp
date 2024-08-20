#include<bits/stdc++.h>
#define int long long int
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;

void solve(){

    int n;  cin >> n;
    vector<int> v(n);
    for(int i = 0; i < n;i++)   cin >> v[i];
    sort(v.begin(), v.end());

    int s = 0, e = n-1;
    int sit = 4;
    int cnt = 1;
    while(s <= e){
        if(v[s] + v[e] <= sit){
            sit -= (v[s++] + v[e--]);
        }
        else if(v[e] <= sit){
            sit -= v[e--];
        }
        else if(v[s] <= sit){
            sit -= v[s++];
        }
        else{
            cnt++;
            sit = 4;
        }
    }
    cout << cnt << "\n";

}

signed main(){
    fast;
    int t = 1;
    // cin >> t;
    while(t--){solve();}
    return 0;
}