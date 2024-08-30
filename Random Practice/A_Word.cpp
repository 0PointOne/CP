#include<bits/stdc++.h>
#define int long long int
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;

void solve(){

    string s;       cin >> s;
    int sm = 0, b = 0;
    for(int i = 0; i < s.size(); i++){
        if(s[i] >= 'A' && s[i] <= 'Z') b++;
        else  sm++;
    }

    if(sm >= b){
        for(int i = 0; i < s.size(); i++){
            if(s[i] >= 'A' && s[i] <= 'Z')   s[i]+=32;
            cout << s[i];
        }
    }
    else{
        for(int i = 0; i < s.size(); i++){
            if(s[i] >= 'a' && s[i] <= 'z')   s[i]-=32;
            cout << s[i];
        }
    }

}

signed main(){
    fast;
    int t = 1;
    // cin >> t;
    while(t--){solve();}
    return 0;
}