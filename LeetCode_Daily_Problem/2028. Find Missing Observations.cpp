class Solution {
public:
    vector<int> missingRolls(vector<int>& v, int mean, int n) {

        int sum = ((v.size() + n) * mean) - accumulate(v.begin(), v.end(), 0LL);
        if(sum < n || sum > n * 6) return {};
        
        vector<int> ans(n, sum / n);
        for(int i = 0; i < sum % n; i++)   ans[i]++;
        
        return ans;
    }
};