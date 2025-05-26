class Solution {
public:
    int MOD = 1e9 + 7;
    int n, LOG;
    vector<vector<int>> up;

    void dfs(const vector<vector<int>> &adj, vector<int> &depth, vector<bool> &visited, int u, int parent){
        visited[u] = true;
        up[0][u] = parent;
        for(int i : adj[u]){
            if(!visited[i]){
                depth[i] = depth[u] + 1;
                dfs(adj, depth, visited, i, u);
            }
        }
    }

    int lca(int a, int b, const vector<int> &depth){
        if(depth[a] < depth[b])   swap(a, b);
        int diff = depth[a] - depth[b];

        for(int k = 0; k < LOG; k++){
            if(diff & (1 << k))   a = up[k][a];
        }
        if(a == b)  return a;

        for(int k = LOG - 1; k >= 0; k--){
            if(up[k][a] != up[k][b]){
                a = up[k][a];
                b = up[k][b];
            }
        }
        return up[0][a];
    }

    vector<int> assignEdgeWeights(vector<vector<int>>& edges, vector<vector<int>>& queries) {
        n = edges.size() + 1;
        LOG = 1;
        while ((1 << LOG) <= n) ++LOG;

        vector<vector<int>> adj(n + 1);
        for(auto &e : edges){
            adj[e[0]].push_back(e[1]);
            adj[e[1]].push_back(e[0]);
        }

        up.assign(LOG, vector<int>(n + 1, -1));
        vector<bool> visited(n + 1, false);
        vector<int> depth(n + 1, 0);
        dfs(adj, depth, visited, 1, -1);

        for(int k = 1; k < LOG; k++){
            for(int i = 1; i <= n; i++){
                int p = up[k-1][i];
                up[k][i] = (p < 0 ? -1 : up[k-1][p]);
            }
        }

        vector<int> ways(n, 1);
        for(int i = 1; i < n; i++) ways[i] = (2LL * ways[i-1]) % MOD;

        vector<int> ans;
        ans.reserve(queries.size());
        for(auto &q : queries){
            int u = q[0], i = q[1];
            if(u == i)      ans.push_back(0);
            else{
                int w = lca(u, i, depth);
                int dist = depth[u] + depth[i] - 2 * depth[w];
                ans.push_back(ways[dist-1]);
            }
        }
        return ans;
    }
};