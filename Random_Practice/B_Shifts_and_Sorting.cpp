#include<bits/stdc++.h>
#define int long long int
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;

void solve(){

    string s;   cin >> s;
    int op = 0, cnt1 = 0, cnt0 = 0;
    for(int i = 0; i < s.size(); i++){

        if(s[i] == '1') cnt1++, cnt0 = 0;

        bool got0 = false;
        while(i < s.size() && s[i] == '0'){
            cnt0++;
            i++;
            got0 = true;
        }
        if(got0 && cnt1){
            int k = ((cnt1 + 1) * cnt0);
            op += k;
            cnt0 = 0;
        }
        if(got0) i--;
    }

    cout << op << "\n";

}

signed main(){
    fast;
    int t = 1;
    cin >> t;
    while(t--){solve();}
    return 0;
}