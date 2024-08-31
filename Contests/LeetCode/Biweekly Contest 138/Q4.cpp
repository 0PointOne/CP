#include<bits/stdc++.h>
#define int long long int
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;

long long minDamage(int power, vector<int>& damage, vector<int>& health) {

    int n = damage.size();
    for(int i = 0; i < n; i++){
        health[i] = (health[i] + power-1) / power;
    }

    vector<int> t(n);
    iota(t.begin(), t.end(), 0);
    
    sort(t.begin(), t.end(), [&](int i, int j){
        return (1LL * health[i] * damage[i] > health[j] * damage[j] * 1LL);
    });

    for(int i = 0; i < n; i++) cout << t[i] << " ";
    cout << "\n";

    long long totalDamage = accumulate(damage.begin(), damage.end(), 0LL);

    long long ans = 0;
    for(int i = 0; i < n; i++){
        ans += totalDamage * health[t[i]];
        totalDamage -= damage[t[i]];
    }
    return ans;
}

void solve(){

    int n;  cin >> n;
    int power;  cin >> power;
    vector<int> damage(n), health(n);
    for(int i = 0; i < n; i++)  cin >> damage[i];
    for(int i = 0; i < n; i++)  cin >> health[i];

    cout << minDamage(power, damage, health);
}   

signed main(){
    fast;
    int t = 1;
    // cin >> t;
    while(t--){solve();}
    return 0;
}