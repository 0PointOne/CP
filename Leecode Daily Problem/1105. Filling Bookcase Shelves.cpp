class Solution {
public:
    int sol(vector<vector<int>> &b, int i, int w, int h, int selWi, vector<vector<int>> &dp){
        if(i >= b.size())       return h;
        if(dp[i][w] != -1)      return dp[i][w];

        int curW = b[i][0];
        int curH = b[i][1]; 

        int opt1 = h + sol(b, i + 1, selWi - curW, curH, selWi, dp);
        int opt2 = INT_MAX;
        if(w >= curW){
            opt2 = sol(b, i + 1, w - curW, max(h, curH), selWi, dp);
        }

        return dp[i][w] = min(opt1, opt2);
    }
    
    int minHeightShelves(vector<vector<int>>& books, int shelfWidth) {
        int n = books.size();
        vector<vector<int>> dp(n, vector<int>(shelfWidth + 1, -1));
        return sol(books, 0, shelfWidth, 0, shelfWidth, dp);
    }
};