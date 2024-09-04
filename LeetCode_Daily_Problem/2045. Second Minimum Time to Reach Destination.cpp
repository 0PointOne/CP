class Solution {
public:
    int secondMinimum(int n, vector<vector<int>>& edges, int time, int change) {
        vector<vector<int>> v(n);
        
        for(auto it: edges){
            v[it[0] - 1].push_back(it[1] - 1);
            v[it[1] - 1].push_back(it[0] - 1);
        }

        vector<pair<int, int>> ans(n, {INT_MAX, INT_MAX});
        priority_queue<pair<int, int>, vector<pair<int, int>>, greater<>> q;

        ans[0] = {0, INT_MAX};
        q.push({0, 0});

        while(!q.empty()){
            auto [curr, node] = q.top();
            q.pop();

            if(curr > ans[node].second) continue;

            int p = curr + time;
            int red = curr / change;

            if(red % 2 == 1)    p = (red + 1) * change + time;
            
            
            for(int it: v[node]){
                if(ans[it].first > p){
                    ans[it].second = ans[it].first;
                    ans[it].first = p;
                    q.push({p, it});
                } 
                else if(ans[it].first < p && ans[it].second > p){
                    ans[it].second = p;
                    q.push({p, it});
                }
            }
        }

        return ans[n - 1].second;
    }
};