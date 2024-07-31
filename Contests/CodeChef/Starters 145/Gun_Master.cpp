#include<bits/stdc++.h>
#define int long long int
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;

void solve(){

    int n;  cin >> n;
    int d;  cin >> d;
    vector<int> v(n);
    for(int i = 0; i < n; i++)  cin >> v[i];

    int bul = 0;
    int cnt = 0;
    if(v[0] > d) cnt++, bul = 1;

    for(int i = 1; i < n; i++){
        if(v[i] > d){
            if(bul == 0) cnt++, bul = 1; 
        }
        else{
            if(bul == 1) cnt++, bul = 0;
        }

    }
    cout << cnt << "\n";
}

signed main(){
    fast;
    int t = 1;
    cin >> t;
    while(t--){solve();}
    return 0;
}