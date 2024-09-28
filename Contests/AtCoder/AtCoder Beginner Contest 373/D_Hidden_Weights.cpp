#include<bits/stdc++.h>
#define int long long int
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;

const int  INF = 1e18;
vector<pair<int, int>> graph[200005];
int x[200005];
bool vis[200005];

void solve(){

    int n, m;
    cin >> n >> m;
    for(int i = 0; i < m; i++){
        int u, v, w;  cin >> u >> v >> w;
        graph[u].push_back({v, w});
        graph[v].push_back({u, -w});
    }

    memset(x, -1, sizeof(x));
    memset(vis, false, sizeof(vis));

    queue<int> qu;
    for(int i = 1; i <= n; i++){

        if(!vis[i]){
            qu.push(i);
            x[i] = 0;
            vis[i] = true;

            while(!qu.empty()){
                int u = qu.front();
                qu.pop();

                for(auto edge : graph[u]){
                    int v = edge.first, w = edge.second;

                    if(!vis[v]){
                        x[v] = x[u] + w;
                        vis[v] = true;
                        qu.push(v);
                    }
                }
            }
        }
    }
    for(int i = 1; i <= n; i++)cout << x[i] << " ";
    cout << "\n";
}

signed main(){
    fast;
    int t = 1;
    // cin >> t;
    while(t--){solve();}
    return 0;
}