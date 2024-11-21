class Solution {
public:
    int countUnguarded(int m, int n, vector<vector<int>>& guards, vector<vector<int>>& walls) {
        vector<vector<int>> g(m, vector<int>(n, 0));

        for(auto& i : guards)    g[i[0]][i[1]] = 2;
        for(auto& i : walls)     g[i[0]][i[1]] = 2;


        int dir[5] = {-1, 0, 1, 0, -1};
        for(auto& i : guards){
            for(int k = 0; k < 4; k++){
                int x = i[0], y = i[1];
                int a = dir[k], b = dir[k + 1];
                while(x + a >= 0 && x + a < m && y + b >= 0 && y + b < n && g[x + a][y + b] < 2){
                    x += a;
                    y += b;
                    g[x][y] = 1;
                }
            }
        }
        int ans = 0;
        for(auto& row : g)   ans += count(row.begin(), row.end(), 0);
    
        return ans;
    }
};