class Solution {
public:
    int sol(int i, int M, vector<int>& p, vector<vector<int> >& dp){
        if(i >= p.size()) return 0;
        if(dp[i][M] != -1) return dp[i][M];
        int sum = 0;
        int ans = INT_MIN;
        for(int j = 0; j < 2 * M; j++){
            if(i+j < p.size())  sum += p[i+j];
            ans = max(ans, sum - sol(i+j+1, max(M, j+1), p, dp));
        }
        return dp[i][M] = ans;
    }
    int stoneGameII(vector<int>& p) {
        int sum = 0;
        for(auto a: p) sum += a;
        vector<vector<int> > dp(100, vector<int>(100, -1));
        int diff = sol(0, 1, p, dp);
        return (sum+diff) / 2;
    }
};