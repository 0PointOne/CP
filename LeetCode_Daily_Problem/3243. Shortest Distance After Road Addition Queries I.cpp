class Solution {
public:
    int bfs(int s, int e, int n, vector<vector<int>>& g){
        vector<int> dist(n, INT_MAX);
        queue<int> q;
        dist[s] = 0;
        q.push(s);

        while(!q.empty()){
            int node = q.front();
            q.pop();

            for(int i: g[node]){
                if(dist[i] > dist[node] + 1){
                    dist[i] = dist[node] + 1;
                    q.push(i);
                }
            }
        }
        return dist[e];
    }
    vector<int> shortestDistanceAfterQueries(int n, vector<vector<int>>& queries) {
        vector<int> ans;
        vector<vector<int>> v(n);
        for(int i = 0; i < n-1; i++){
            v[i].push_back(i+1);
        }
        for(auto q: queries){
            v[q[0]].push_back(q[1]);
            ans.push_back(bfs(0, n-1, n, v));
        }
        return ans;
    }
};