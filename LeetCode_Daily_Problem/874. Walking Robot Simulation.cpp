class Solution {
public:
    int robotSim(vector<int>& c, vector<vector<int>>& obs) {

        vector<pair<int, int>> dir = {{0, 1}, {1, 0}, {0, -1}, {-1, 0}};

        set<pair<int, int>> st;
        for(int i = 0; i < obs.size(); i++)   st.insert({obs[i][0], obs[i][1]});
        
        int ax = 0;
        int n = c.size(), x = 0, y = 0, mx = 0;

        for(int i = 0; i < n; i++){
            if(c[i] == -1)       ax = (ax + 1) % 4;
            else if(c[i] == -2)  ax = (ax - 1 + 4) % 4;

            else{
                for(int j = 0; j < c[i]; j++){
                    if(st.count({x + dir[ax].first, y + dir[ax].second}))   break;

                    x += dir[ax].first;
                    y += dir[ax].second;

                    mx = max(mx, x * x + y * y);
                }
            }
        }
        return mx;
    }
};