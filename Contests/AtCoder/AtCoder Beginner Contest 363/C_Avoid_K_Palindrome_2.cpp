#include<bits/stdc++.h>
#define int long long int
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;

void permu(string& s, vector<string>& v){

    sort(s.begin(),s.end());
    v.push_back(s);
    while(next_permutation(s.begin(),s.end()))
    {
        v.push_back(s);
    }
}

bool isPer(int s, int e, string& str){
    
    while(s < e){
        if(str[s] != str[e]) return false;
        s++;
        e--;
    }
    return true;
}

void solve(){

    int n, k;   cin >> n >> k;
    string s;   cin >> s;
    vector<string> v;
    permu(s, v);


    int ans = 0;
    for(auto it: v){
        bool isP = false;
        for(int j = 0; j < n-k+1; j++){
            if(isPer(j,j+k-1, it)){
                isP = true;
                break;
            }
        }
        if(!isP) ans++;
    }
    cout << ans << "\n";

}

signed main(){
    fast;
    int t = 1;
    // cin >> t;
    while(t--){solve();}
    return 0;
}