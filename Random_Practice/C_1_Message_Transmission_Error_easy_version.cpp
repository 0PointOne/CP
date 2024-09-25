#include<bits/stdc++.h>
#define int long long int
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;

void solve(){

    string s;	cin >> s;
	int n = s.size();

	string a = "";
	int i = 0;
	for(; i < n/2 + 1; i++){
		a += s[i];
	}

	for(; i < n; i++){
		s[0] = '*';
		if(s.find(a)){
            s[0] = a[0];
			int j = n-1;
			bool ist = true;
			for(int k = a.size()-1; k >= 0; k--){
				if(s[j--] != a[k]){
					ist = false;
					break;
				}
			}
			if(ist){
				cout << "YES\n";
				cout << a << "\n";
				return;
			}
		}
		s[0] = a[0];
		a += s[i];
	}
	cout << "NO\n";

}

signed main(){
    fast;
    int t = 1;
    //cin >> t;
    while(t--){solve();}
    return 0;
}