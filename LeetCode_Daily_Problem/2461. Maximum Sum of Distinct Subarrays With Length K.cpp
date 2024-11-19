class Solution {
public:
    long long maximumSubarraySum(vector<int>& nums, int k) {
        int n = nums.size();
        vector<long long> pf(n);
        pf[0] = nums[0];
        for(int i = 1; i < n; i++){
            pf[i] = pf[i-1] + nums[i];
        }

        unordered_map<int, int> mp;
        int i = 0;
        while(i < k-1) mp[nums[i++]]++;

        int j = 0;
        long long ans = 0;
        for(; i < n; i++){
            mp[nums[i]]++;
            if(mp.size() == k){
                long long sum = (j > 0 ? pf[i] - pf[j-1]   :  pf[i]);
                ans = max(sum, ans);
            }
            mp[nums[j]]--;
            if(mp[nums[j]] == 0){
                mp.erase(nums[j]);
            }
            j++;
        }
        return ans;
    }
};