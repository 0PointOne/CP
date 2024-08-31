#include<bits/stdc++.h>
#define int long long int
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;

string stringHash(string s, int k) {
        int n = s.size();
        int di = n / k;
        string ans = "";
        int i = 0;
        while(di--){
            int sum = 0;
            int j = i;
            for(; j < i+k; j++){
                sum += (s[j] - 'a');
            }
            i = j;
            sum %= 26;
            ans += (sum + 'a');
        }
        return ans;
    }

void solve(){

    string s;   cin >> s;
    int k;  cin >> k;
    cout << stringHash(s, k);
}

signed main(){
    fast;
    int t = 1;
    // cin >> t;
    while(t--){solve();}
    return 0;
}