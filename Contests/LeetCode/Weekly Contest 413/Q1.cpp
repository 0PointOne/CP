#include<bits/stdc++.h>
#define int long long int
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;

bool checkTwoChessboards(string a, string b) {
    int s1 = a[0]- 'a'-1 + a[1] - '0';
    int s2 = b[0]- 'a'-1 + b[1] - '0';

    if(s1 & 1 && s2 & 1) return true;
    if(s1 % 2 == 0 && s2 % 2 == 0)  return true;
    return false;
}

void solve(){

    string a, b;    cin >> a  >> b;
    cout << checkTwoChessboards(a, b);

}

signed main(){
    fast;
    int t = 1;
    //cin >> t;
    while(t--){solve();}
    return 0;
}