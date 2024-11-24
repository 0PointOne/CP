class Solution {
public:
    long long maxMatrixSum(vector<vector<int>>& matrix) {
        int n = matrix.size();
        long long sum = 0, mn = INT_MAX, cntNeg = 0;
        for(int i = 0; i < n; i++){
            for(int j = 0; j < n; j++){
                if(matrix[i][j] < 0)  cntNeg++;
                long long val = abs(matrix[i][j]);
                sum += val;
                mn = min(mn, val);
            }
        }
        return (cntNeg & 1  ?  sum - (mn * 2)   : sum);
    }
};