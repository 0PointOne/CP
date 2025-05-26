class Solution {
private:
    void dfs(vector<vector<int>> &adj, vector<int> &height, vector<bool> &visited, int par, int &mx){
        visited[par] = true;
        for(auto it: adj[par]){
            if(!visited[it]){
                height[it] = 1 + height[par];
                mx = max(mx, height[it]);
                dfs(adj, height, visited, it, mx);
            }
        }
    }
public:
    int mod = 1e9 + 7;
    int assignEdgeWeights(vector<vector<int>>& edges) {
        int n = edges.size() + 1;
        vector<vector<int>> adj(n+1);
        for(auto it: edges){
            int u = it[0];
            int v = it[1];
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        vector<bool> visited(n+1, false);
        vector<int> height(n+1, 0);
        int mx = 0;
        dfs(adj, height, visited, 1, mx);
        
        if(mx <= 1) return mx;
        mx--;
        for(int i = 0; i <= n; i++){
            cout << i << ": " << height[i] << "\n";
        }cout << "\n";

        long long ans = 1;
        while(mx > 0){
            mx--;
            ans = (ans << 1) % mod;
        }
        return int(ans);
    }
};