#include<bits/stdc++.h>
#define int long long int
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;

void solve(){
    string s;
    while(cin >> s){
    
        string a = "";
        int l = 0, r = s.size()-1;
        while(l <= r){
            if(s[l] != s[r]) a += s[l++];
            else l++, r--;
        }
        reverse(a.begin(), a.end());
        string temp = s + a;
        l = 0, r = temp.size()-1;
        bool ist = true;
        while(l <= r){
            if(temp[l++] != temp[r--]){
                ist = false;
                break;
            }
        }
        if(ist)  cout << temp << "\n";

        else{
            cout << s << "\n";
            if(s.size() & 1) s.pop_back();
            reverse(s.begin(), s.end());
            cout << s << "\n";
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