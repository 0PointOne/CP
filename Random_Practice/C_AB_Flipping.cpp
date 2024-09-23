#include<bits/stdc++.h>
#define int long long int
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;

void solve(){

    int n;  cin >> n;
    string s;   cin >> s;

    int aIdx = -1, bCnt = 0, ans = 0;

    for(int i = n-1; i >= 0; i--){
        if(s[i] == 'B') bCnt++;
        else{
            if(aIdx == -1) ans += bCnt;
            else{
                ans += min(bCnt, aIdx - i);
            }
            aIdx = i;
        }
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