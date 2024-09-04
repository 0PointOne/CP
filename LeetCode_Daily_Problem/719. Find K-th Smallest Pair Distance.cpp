class Solution {
public:
    int total(int k, vector<int>& nums){
        
        int n = nums.size(), l = 0, p = 0;
        for(int i = 0; i < n; i++){
            while(nums[i] - nums[l] > k) l++;
            p += i - l;
        }
        return p;
    }

    int smallestDistancePair(vector<int>& nums, int k) {

        sort(nums.begin(), nums.end());

        int l = 0, r = *max_element(nums.begin(), nums.end());
        int mid = l + (r - l) / 2;

        while(l < r){
            if(total(mid, nums) >= k)   r = mid;
            else                l = mid + 1;
            mid = l + (r - l) / 2;
        }   
        return l;
    }
};