#include<bits/stdc++.h>
#define int long long int
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;

void solve(){

    int n, m;   cin >> n >> m;
    string s;   cin >> s;

    int cnt = 0;
    for(int i = 0; i < n-2; i++){
        if(s[i] == 'A' && s[i+1] == 'B' && s[i+2] == 'C') cnt++;
    }

    while(m--){
        int i;    cin >> i;
        i--;
        char ch;    cin >> ch;

        if(i-2 >= 0 && s[i-2] == 'A' && s[i-1] == 'B' && s[i] == 'C'){
            cnt--;
        }
        else if(i-1 >= 0 && i+1 < n && s[i-1] == 'A' && s[i] == 'B' && s[i+1] == 'C') cnt--;
        else if(i+2 < n && s[i] == 'A' && s[i+2] == 'C' && s[i+1] == 'B') cnt--;

        s[i] = ch;
        if(i-2 >= 0 && s[i-2] == 'A' && s[i-1] == 'B' && s[i] == 'C'){
            cnt++;
        }
        else if(i-1 >= 0 && i+1 < n && s[i-1] == 'A' && s[i] == 'B' && s[i+1] == 'C') cnt++;
        else if(i+2 < n && s[i] == 'A' && s[i+2] == 'C' && s[i+1] == 'B') cnt++;

        cout << cnt << "\n";
    }

}

signed main(){
    fast;
    int t = 1;
    //cin >> t;
    while(t--){solve();}
    return 0;
}