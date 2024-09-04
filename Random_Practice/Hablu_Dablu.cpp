#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    
    ll n, h;   cin >> n >> h;
    vector<ll> v(n);
    for(ll i = 0; i < n; i++)  cin >> v[i];

    ll mx = *max_element(v.begin(), v.end());

    mx--;
    long long total = (mx * (mx + 1)) / 2;

    cout << (h > total  ?  "Hablu"  :  "Dablu") << endl;

    
    return 0;
}