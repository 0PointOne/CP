#include<bits/stdc++.h>
#define int long long int
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;

void solve(){

    string s;   cin >> s;

    int n =  s.size();
    int upCase = 0;
    for(int i = 0; i < n; i++){
        if(s[i] >= 'A' && s[i] <= 'Z') upCase++;
    }

    if(upCase == n){
        for(int i = 0; i < n; i++) s[i] += 32;
    }
    else if(upCase == n-1 && s[0] >= 'a' && s[0] <= 'z'){
        s[0] -= 32;
        for(int i = 1; i < n; i++)   s[i] += 32;
    }
    cout << s << "\n";

}

signed main(){
    fast;
    int t = 1;
    //cin >> t;
    while(t--){solve();}
    return 0;
}