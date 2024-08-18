class Solution {
public:
    int nthUglyNumber(int n) {

        vector<int> dp(n);
        dp[0] = 1;
        vector<int> mul{2, 3, 5};
        vector<int> po(3);

        for(int i = 1; i < n; i++){
            int mn = INT_MAX;
            for(int j = 0; j < 3; j++)    mn = min(mn, dp[po[j]] * mul[j]);
            
            dp[i] = mn;
            for(int j = 0; j < 3; j++){
                if(mn == dp[po[j]] * mul[j]) po[j]++;
            }
        }
        return dp[n-1];
    }
};