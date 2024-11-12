class Solution {
public:
    int rob(vector<int>& nums) {
        int n = nums.size();
        if(n == 1) return nums[0];

        int ans = 0;
        int pre1 = nums[0], pre2 = 0;
        for(int i = 1; i < n-1; i++){
            int mx = nums[i];
            if(i > 1) mx += pre2;
            mx = max(mx, pre1);
            
            pre2 = pre1;
            pre1 = mx;
        }
        ans = pre1;
        pre1 = nums[1], pre2 = 0;
        for(int i = 2; i < n; i++){
            int mx = nums[i];
            if(i > 2) mx += pre2;
            mx = max(mx, pre1);

            pre2 = pre1;
            pre1 = mx;
        }
        return max(ans, pre1);
    }
};