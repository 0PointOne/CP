class Solution {
public:
    void sol(vector<int>& candidates, int target, int i, vector<vector<int> >& ans, vector<int>& t){
    
        if(target == 0){
            ans.push_back(t);
            return;
        }
        for(int j = i; j < candidates.size(); j++){
            if(j > i && candidates[j] == candidates[j-1]) continue;
            if(candidates[j] > target) break;
            t.push_back(candidates[j]);
            sol(candidates, target - candidates[j], j + 1, ans, t); 
            t.pop_back();
        }
    }

    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        sort(candidates.begin(), candidates.end());
        vector<vector<int>> ans;
        vector<int> t;
        sol(candidates, target, 0, ans, t);
        return ans;
    }
};