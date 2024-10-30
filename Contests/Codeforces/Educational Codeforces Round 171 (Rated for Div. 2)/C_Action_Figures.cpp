#include<bits/stdc++.h>
#define int long long int
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;

void solve(){

    int n;  cin >> n;
    string s;   cin >> s;
    
    int i = n-1, j = 0;
    int ans = 0;
    while(i >= 0){
        if(j >= i){
            ans += (i + 1);
            j--;
        }
        else if(s[i] == '1') j++;
        else{
            ans += (i + 1);
            j--;
            if(j < 0) j++;
        }
        i--;
    }
    cout << ans << "\n";
}

signed main(){
    fast;
    int t = 1;
    cin >> t;
    while(t--){solve();}
    return 0;
}