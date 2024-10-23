class Solution {
  public:
    long long countWays(int N) {
        // code here
        int MOD = 1000000007;
        long long dp[N + 1];
        dp[0] = dp[1] = dp[2] = 1; dp[3] = 2;
        for(int i = 4; i <= N; i++){
            dp[i] = (dp[i-1] + dp[i-3] + dp[i-4]) % MOD;
        }
        return dp[N];
    }
};