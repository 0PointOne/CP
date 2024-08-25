#include<bits/stdc++.h>
#define int long long int
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;

void solve(){

    int n, m;   cin >> n >> m;
    int ans = 0;

    for(int i = 0; i < n; i++){

        int l;  cin >> l;
        unordered_set<int> st;
        for(int j = 0; j < l; j++){
            int k; cin >> k;
            st.insert(k);
        }

        bool ist = true; 
        int k = 0;
        while(1){ 
            if(!st.count(k)){ 
                if(ist) ist = false; 
                else{ 
                    ans = max(ans, k); 
                    break; 
                } 
            } 
            k++;
        } 
    }

    if(m <= ans) cout << ans * (m + 1) << "\n";
    else  cout << (ans * (ans + 1)) +  (m * (m + 1) / 2) - (ans * (ans + 1) / 2) << "\n";
    
}

signed main(){
    fast;
    int t = 1;
    cin >> t;
    while(t--){solve();}
    return 0;
}