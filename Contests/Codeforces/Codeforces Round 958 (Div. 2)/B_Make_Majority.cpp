#include<bits/stdc++.h>
#define int long long int
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;

void solve(){

    int n;  cin >> n;
    int one = 0, zero = 0;
    string s;   cin >> s;

    bool isZ = false;
    for(int i = 0; i < n; i++){
        if(s[i] == '0') isZ = true;
        else{
            if(isZ) zero++, isZ = false;
            one++;
        }
    }
    if(isZ) zero++;

    cout << (zero < one ?  "Yes" :  "No") << "\n";

}

signed main(){
    fast;
    int t = 1;
    cin >> t;
    while(t--){solve();}
    return 0;
}