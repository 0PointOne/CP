#include<bits/stdc++.h>
#define int long long int
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;

void solve(){

    string s;   cin >> s;
    string t;   cin >> t;

    string copy = s;
    if(s.size() < t.size()){
        cout << "UNRESTORABLE" << "\n";
        return;
    }

    int k = 0;
    vector<string> ans;
    while(k <= s.size()-t.size()){

        int i = k, j = 0;
        bool isf = true;
        while(i < s.size() && j < t.size()){
            if(s[i] == t[j] || s[i] == '?'){
                s[i] = t[j];
                i++, j++;
            }
            else{
                isf = false;
                break;
            }
        }
        if(isf){
            for(int i = 0; i < s.size(); i++){
                if(s[i] == '?') s[i] = 'a';
            }
            ans.push_back(s);
        }
        s = copy;
        k++;
    }
    if(ans.size() == 0){
        cout << "UNRESTORABLE" << "\n";
    }else   cout << *min_element(ans.begin(), ans.end()) << "\n";
}

signed main(){
    fast;
    int t = 1;
    // cin >> t;
    while(t--){solve();}
    return 0;
}