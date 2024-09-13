class Solution {
public:
        vector<int> xorQueries(vector<int>& arr, vector<vector<int>>& queries) {
        int n = arr.size();
        vector<int> prXor(n+1);


        for(int i = 1; i <= n; i++){
            prXor[i] = prXor[i-1] ^ arr[i-1];
        }
        vector<int> ans;

        for(int i = 0; i < queries.size(); i++){
            ans.push_back(prXor[queries[i][1] + 1] ^ prXor[queries[i][0]]);
        }
        return ans;
    }
};