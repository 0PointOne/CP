class Solution {
public:
    vector<vector<int>> modifiedGraphEdges(int n, vector<vector<int>>& edges, int sur, int dest, int target) {

        auto Dij = [&](int n, vector<vector<pair<int, int>>>& adj, int sur, int dest){

            vector<int> mnDis(n, INT_MAX);
            priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
            mnDis[sur] = 0;
            pq.push({0, sur});

            while(!pq.empty()){
                int dist = pq.top().first;
                int u = pq.top().second;
                pq.pop();

                if(dist > mnDis[u])    continue;

                for(auto& node : adj[u]){
                    int v = node.first;
                    int w = node.second;

                    if(dist + w < mnDis[v]){
                        mnDis[v] = dist + w;
                        pq.push({mnDis[v], v});
                    }
                }
            }
            return mnDis[dest];
        };

        vector<vector<pair<int, int>>> adj(n);

        for(auto& e : edges){
            if(e[2] != -1){
                adj[e[0]].push_back({e[1], e[2]});
                adj[e[1]].push_back({e[0], e[2]});
            }
        }

        int cur = Dij(n, adj, sur, dest);
        if(cur < target) return {};

        if(cur == target){
            for(auto& e : edges){
                if(e[2] == -1){
                    e[2] = 1e9;
                }
            }
            return edges;
        }

        for(int i = 0; i < edges.size(); i++){

            if(edges[i][2] == -1){
                edges[i][2] = 1;
                adj.assign(n, vector<pair<int, int>>());

                for(auto& e : edges){
                    if(e[2] != -1){
                        adj[e[0]].push_back({e[1], e[2]});
                        adj[e[1]].push_back({e[0], e[2]});
                    }
                }

                cur = Dij(n, adj, sur, dest);
                if(cur <= target){
                    edges[i][2] += target - cur;

                    for(int j = i + 1; j < edges.size(); j++){
                        if(edges[j][2] == -1)    edges[j][2] = 1e9;
                    }
                    return edges;
                }
            
        }
        return {};
    }
};