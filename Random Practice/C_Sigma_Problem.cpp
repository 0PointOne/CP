#include<bits/stdc++.h>
using namespace std;
using ll = long long;

const ll mod = 1e8;

void solve () {
  ll n;  cin >> n;
  vector<ll> a(n);
  for (auto &ai: a) {
    cin >> ai;
  }
  sort(a.begin(), a.end());

  ll ans = 0;
  for (int i = 0, j = n - 1; i < n; ++i) {
    ans += a[i] * (n - 1);
    j = max(j, i);
    while (j > i and a[i] + a[j] >= mod)  j--;
    ans -= 1ll * mod * (n - 1 - j);
  }
  cout << ans << "\n";
}

int main(){
  ios::sync_with_stdio(0), cin.tie(0);
  
  int tc = 1;
  // cin >> tc;
  for (int t = 1; t <= tc; ++t) {
    solve();
  }
}