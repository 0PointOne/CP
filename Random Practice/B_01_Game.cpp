#include<bits/stdc++.h>
#define endl "\n"
#define ll long long
#define s(a, b) a+b
#define v_all v.begin(), v.end()
#define mod 100000007
#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define print_v(v) for(auto it : v) cout << it << " "; cout << endl;
#define print_v_pair(v) for(auto it: v) cout << it.first << " " << it.second << endl;
#define input_v for(auto &it : v)   cin >> it;
using namespace std;

void solve(){
    
    string s;   cin >> s;
    stack<int> st;
    int mo = 0;
    for(int i = 0; i < s.size(); i++){
        if(st.empty() || s[i] == st.top()){
            st.push(s[i]);
        }
        else if(s[i] != st.top()){
            st.pop();
            mo++;
        }
    }

    cout << (mo & 1  ?  "DA"  :   "NET") << endl;
}

int main(){
    fast_io;

    int t = 1;
    cin >> t;
    while(t--){
        solve();
    }

    return 0;
}