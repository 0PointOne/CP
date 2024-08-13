#include<bits/stdc++.h>
#define int long long int
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;

void solve(){

    int n;  cin >> n;
    map<int, int> mp;
    bool isf = true;
    for(int i = 0; i < n; i++){
        int x;  cin >> x;
        if(!mp.size()) mp[x]++;
        else{
            if(mp[x-1] != 0 || mp[x+1] != 0){
                mp[x]++;
            }
            else{
                isf = false;
            }
        }
    }
    cout << (isf ? "YES"  :  "NO") <<  "\n";
}

signed main(){
    fast;
    int t = 1;
    cin >> t;
    while(t--){solve();}
    return 0;
}