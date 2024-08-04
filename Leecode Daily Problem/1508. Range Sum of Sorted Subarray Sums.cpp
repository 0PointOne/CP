class Solution {
public:
    int rangeSum(vector<int>& nums, int n, int left, int right) {

        int total = (n * (n + 1)) / 2;
        vector<int> v(total, 0);

        int k = 0;
        for(int i = 0; i < n; i++){
            int cnt = 0;
            for(int j = i; j < n; j++){
                cnt += nums[j];
                v[k] = cnt;
                k++;
            }
        }
        sort(v.begin(), v.end());
        int sum = 0;
        for(int i = left - 1; i < right; i++) sum = (sum + v[i]) % 1000000007;

        return sum;
    }
};