#include<bits/stdc++.h>
#define int long long int
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;

int countPairs(vector<int>& num) {
    int n = num.size();
    vector<string> v(num.size());
    for(int i = 0; i < n; i++){
        string s = to_string(num[i]);
        v[i] = s;
    } 
    map<pair<int,int>, int> vis;
    auto check = [&](int i, int x){
        int cnt = 0;
        int j = i;
        for(i = 0; i < n; i++){
            if((num[i] == x) && (i != j) && vis[{i, j}] == 0){
                cnt++, vis[{min(i, j), max(i, j)}]++;
            }
        }
        return cnt;
    };

    int cnt = 0;
    for(int i = 0; i < n; i++){
        
        if(v[i].size() == 1){
            int x = 0;
            int j = 0;
            while(j < v[i].size()){
                x = x * 10 + (v[i][j] - '0');
                j++;
            }
            cnt += check(i, x);
            continue;
        }
        map<int,int> mp;
        int x = 0;
        int j = 0;
        while(j < v[i].size()){
            x = x * 10 + (v[i][j] - '0');
            j++;
        }
        if(!mp[x]) cnt += check(i, x), mp[x]++;
        for(int k = 0; k < v[i].size(); k++){
            for(int j = k+1; j < v[i].size(); j++){
                if(k != j){
                    swap(v[i][k], v[i][j]);
                    int x = 0;
                    int j = 0;
                    while(j < v[i].size()){
                        x = x * 10 + (v[i][j] - '0');
                        j++;
                    }
                    if(!mp[x]) cnt += check(i, x), mp[x]++;
                    swap(v[i][k], v[i][j]);
                }
            }
        }
        mp.clear();

    }
    return cnt;
}

void solve(){

    int n;  cin >> n;
    vector<int> v(n);
    for(int i = 0; i < n; i++)  cin >> v[i];
    cout << countPairs(v);
}

signed main(){
    fast;
    int t = 1;
    // cin >> t;
    while(t--){solve();}
    return 0;
}