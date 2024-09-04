class Solution {
public:
    int n, m;
    int vis[31][31];
    vector<pair<int, int> > dir = {{0, -1}, {0, 1}, {1, 0}, {-1, 0}};

    bool isValid(int r, int c){
        return r >= 0 && r < n && c >= 0 && c < m;
    }
    void dfs(int x, int y, vector<vector<int>>& grid){
        vis[x][y] = 1;
        for(auto it: dir){
            int r = it.first + x, c = it.second + y;
            if(isValid(r, c) && !vis[r][c] && grid[r][c])    dfs(r, c, grid);
        }
    }

    int minDays(vector<vector<int>>& grid) {
        n = grid.size();
        m = grid[0].size();
        int island = 0;
        memset(vis, 0, sizeof(vis));

        for(int i = 0; i < n; i++){
            for(int j = 0; j < m; j++){
                if(!vis[i][j] && grid[i][j])  dfs(i, j, grid), island++;
            }
        }
        if(island != 1) return 0;

        for(int i = 0; i < n; i++){
            for(int j = 0; j < m; j++){
                
                if(grid[i][j]){
                    grid[i][j] = 0;
                    island = 0;
                    memset(vis, 0, sizeof(vis));

                    for(int k = 0; k < n; k++){
                        for(int l = 0; l < m; l++){
                            if(!vis[k][l] && grid[k][l])   dfs(k, l, grid),   island++;
                        }
                    }
                    grid[i][j] = 1;
                }
                if(island != 1)   return 1;
            }
        }
        return 2;
    }
};