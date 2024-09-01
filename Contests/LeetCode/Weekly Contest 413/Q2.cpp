#include<bits/stdc++.h>
#define int long long int
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;


vector<int> resultsArray(vector<vector<int>>& v, int k) {
    int n = v.size();
    vector<int> ans;
    priority_queue<int> pq; 

    for(int i = 0; i < n; i++){
        int dis = abs(v[i][0]) + abs(v[i][1]);
        
        if(pq.size() < k) pq.push(dis);
        else if(dis < pq.top()){
            pq.pop();
            pq.push(dis);
        }
        if(pq.size() == k)  ans.push_back(pq.top());
        else                ans.push_back(-1);
    }
    return ans;
}

void solve(){

    int n;  cin >> n;
    vector<vector<int> > v(n, vector<int>(2));

    for(int  i = 0; i < n; i++){
        for(int j = 0; j < 2; j++) cin >> v[i][j];
    }
    int k;  cin >> k;
    vector<int> ans = resultsArray(v, k);

    for(int i = 0; i < n; i++) cout << ans[i] << " ";
    cout << "\n";
}

signed main(){
    fast;
    int t = 1;
    //cin >> t;
    while(t--){solve();}
    return 0;
}