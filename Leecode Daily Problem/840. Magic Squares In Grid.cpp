class Solution {
public:
    int numMagicSquaresInside(vector<vector<int>>& grid) {
        int cnt = 0;
        int n = grid.size();
        int m = grid[0].size();

        auto isPos = [&](int x, int y){
            int sum = 0;
            vector<int> fr(16, 0);
            for(int i = y; i < y+3; i++) sum += grid[x][i], fr[grid[x][i]]++;
            if(sum != 15) return false;
            sum = 0;
            for(int i = y; i < y+3; i++) sum += grid[x+1][i], fr[grid[x+1][i]]++;
            if(sum != 15) return false;
            sum = 0;
            for(int i = y; i < y+3; i++) sum += grid[x+2][i], fr[grid[x+2][i]]++;
            if(sum != 15) return false;
            sum = 0;
            for(int i = x; i < x+3; i++) sum += grid[i][y], fr[grid[i][y]]++;
            if(sum != 15) return false;
            sum = 0;
            for(int i = x; i < x+3; i++) sum += grid[i][y+1], fr[grid[i][y+1]]++;
            if(sum != 15) return false;
            sum = 0;
            for(int i = x; i < x+3; i++) sum += grid[i][y+2], fr[grid[i][y+2]]++;
            if(sum != 15) return false;
            sum = 0;
            for(int i = 0; i < 3; i++) sum += grid[x+i][y+i], fr[grid[x+i][y+i]]++;
            if(sum != 15) return false;
            for(int i = 1; i < 10; i++) if(!fr[i]) return false;
            return true;
        };

        for(int i = 0; i < n-2; i++){
            for(int j = 0; j < m-2; j++){
                if(isPos(i, j)) cnt++;
            }
        }
        return cnt;
    }
};