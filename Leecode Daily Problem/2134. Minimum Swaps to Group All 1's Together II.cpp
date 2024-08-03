class Solution {
public:
    int minSwaps(vector<int>& nums) {

        int one = accumulate(nums.begin(), nums.end(), 0), zero = 0;

        for(int i = 0; i < one; i++){
            if(nums[i] == 0) zero++;
        }

        int swa = zero;
        for(int i = 1; i < nums.size(); i++){
            if(nums[(i + one - 1) % nums.size()] == 0)         zero++;
            if(nums[i - 1] == 0)                               zero--;
            swa = min(swa, zero);
        }
        return swa;
    }
};