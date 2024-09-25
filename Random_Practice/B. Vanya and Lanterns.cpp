#include<bits/stdc++.h>
#define int long long int
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;

void solve(){

	int n, l;	cin >> n >> l;

	vector<double> v(n);
	for(int i = 0; i < n; i++)	cin >> v[i];
	sort(v.begin(), v.end());

	double mx = max(l - v.back(), v[0] - 0);
	for(int i = 1; i < n; i++){
		mx = max(mx, (v[i] - v[i-1]) / 2.0);
	}

	cout << fixed << setprecision(10) << mx;
}

signed main(){
	fast;
	#ifndef ONLINE_JUDGE
	  freopen("input.txt", "r", stdin);
	  freopen("output.txt", "w", stdout);
	#endif
	int t = 1;
	//cin >> t;
	while(t--){solve();}
	return 0;
}