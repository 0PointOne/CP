#include<bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
#define endl "\n"
#define ll long long
#define s(a, b) a+b
#define mod 100000007
#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define print_v(v) for(auto it : v) cout << it << " "; cout << endl;
#define print_v_pair(v) for(auto it: v) cout << it.first << " " << it.second << endl;
#define scanf_v for(auto &it : v)   cin >> it;
using namespace std;
using namespace __gnu_pbds;
template<class T> using od_set = tree<T, null_type, less<T>, rb_tree_tag,tree_order_statistics_node_update>;

void bfs_traverse(vector<vector<int> > &v, vector<bool> &vis, vector<int> &parent, int src){

    queue<int> q;
    q.push(src);
    vis[src] = false;

    while(!q.empty()){
        int pr = q.front();
        q.pop();

        for(auto it: v[pr]){

            if(vis[it]){
                q.push(it);
                vis[it] = false;
                parent[it] = pr;
            }
        }
    }
}

void solve(){
    
    int n, e;   cin >> n >> e;
    vector<vector<int> > v(n + 1);
    while(e--){
        int a, b;   cin >> a >> b;
        v[a].push_back(b);
        v[b].push_back(a);
    }

    
        // int src, des, cost;   cin >> src >> des >> cost;

        int src = 0;
        vector<bool> vis(n + 1, true);
        vector<int> parent(n + 1, -1);
        bfs_traverse(v, vis, parent, src);

    
        int i = n;
        int path = 0;
        bool isCnt = false;
        while(i != -1){
            if(i == src){
                isCnt = true;
            }
            i = parent[i];
            path++;
        }

        cout << path << endl;

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