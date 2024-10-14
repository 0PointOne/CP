#include<bits/stdc++.h>
#define int long long int
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;

string binary_(int n){
    string ans = "";
    while(n){
        if(n % 2 == 0) ans += '0';
        else           ans += '1';
        n /= 2;
    }
    return ans;
}

int sum(int inc, int val){
    int ans = 0;
    while(val > 0){
        ans += (val * inc);
        inc *= 2;
        val--;
    }
    return ans;
}

void solve(){

    int n;  cin >> n;

    string bin = binary_(n);
    bin = '*' + bin;
    
    int ans = 0;
    for(int i = bin.size()-1; i >= 1; i--){
        if(bin[i] == '1'){
            ans += i;
            ans += sum(1, i-1);
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