class Solution {
public:
    bool isValid(int x, int y, int R, int C){
        return x >= 0 && y >= 0 && x < R && y < C;
    }

    vector<vector<int>> spiralMatrixIII(int rows, int cols, int rStart, int cStart) {

        int n = rows * cols;
        int x = rStart, y = cStart;

        vector<vector<int> > ans;
        ans.push_back({x, y});
        if(isValid(x, y+1, rows, cols)) ans.push_back({x, y+1});
        y++;
        if(isValid(x+1, y, rows, cols)) ans.push_back({x+1, y});
        x++;
        if(isValid(x, y-1, rows, cols)) ans.push_back({x, y-1});
        y--;
        if(isValid(x, y-1, rows, cols))   ans.push_back({x, y-1});
        y--;

        int area = 2;
        while(ans.size() < n){

            int i = 0;
            while(i < area){
                if(isValid(x-1, y, rows, cols))  
                    ans.push_back({x-1, y});
                x--;
                i++;
            }
            area++;
            i = 0;
            while(i < area){
                if(isValid(x, y+1, rows, cols))  
                    ans.push_back({x, y+1});
                y++;
                i++;
            }
            i = 0;
            while(i < area){
                if(isValid(x+1, y, rows, cols))  
                    ans.push_back({x+1, y});
                x++;
                i++;
            }
            area++;
            i = 0;
            while(i < area){
                if(isValid(x, y-1, rows, cols))  
                    ans.push_back({x, y-1});
                y--;
                i++;
            }
        }
        return ans;
    }
};