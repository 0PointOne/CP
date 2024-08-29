class Solution {
public:
    int bfs(vector<vector<int>>& s, vector<bool>& vis, int i, int n){
        queue<int> q;
        q.push(i);
        vis[i] = true;
        int cnt = 0;
        while(!q.empty()){
            int idx = q.front();
            q.pop();
            for(int i = 0; i < n; i++){
                if(!vis[i]){
                    if(s[i][0] == s[idx][0] || s[i][1] == s[idx][1]){
                        vis[i] = true;
                        q.push(i);
                        cnt++;
                    }
                }
            }
        }
        return cnt;
    }
    int removeStones(vector<vector<int>>& s) {
        int n = s.size();
        vector<bool> vis(n);

        int ans = 0;
        for(int i = 0; i < n; i++){
            if(!vis[i]){
                ans += bfs(s, vis, i, n);
            }
        }
        return ans;
    }
};