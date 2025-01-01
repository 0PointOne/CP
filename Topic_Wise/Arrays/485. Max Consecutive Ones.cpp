class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int ans = 0, cnt = 0;
        for(int i = 0; i < nums.size(); i++){
            if(nums[i]) ++cnt, ans = max(ans, cnt);
            else cnt = 0;
        }
        return ans;
    }
};