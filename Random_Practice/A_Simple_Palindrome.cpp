#include<bits/stdc++.h>
#define int long long int
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;

void solve(){

    int n;  cin >> n;

    int k = n / 5;
    int rem = n % 5;
    vector<char> ch = {'a', 'e', 'i', 'o', 'u'};
    int i = 0;
    while(rem && i < 5){
        string a(k+1, ch[i++]);
        cout << a;
        rem--;
    }

    while(i < 5){
        string a(k, ch[i++]);
        cout << a;
    }
    cout << "\n";

}

signed main(){
    fast;
    int t = 1;
    cin >> t;
    while(t--){solve();}
    return 0;
}