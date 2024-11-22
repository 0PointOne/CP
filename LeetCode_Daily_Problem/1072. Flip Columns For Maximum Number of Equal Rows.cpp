class Solution {
public:
    int maxEqualRowsAfterFlips(vector<vector<int>>& matrix) {
        map<vector<int>, int> mp;
        int n = matrix.size(), m = matrix[0].size();

        vector<int>v(m);
        for(int i = 0; i < n; i++){
            for(int j = 0; j < m; j++){
                v[j] = ((matrix[i][j] == 1) ? 0 : 1);
            }
            if(mp[v] > 0) mp[v]++;
            else if(mp[matrix[i]] > 0) mp[matrix[i]]++;
            else    mp[v]++;
        }

        int mx = 0;
        for(auto it: mp) mx = max(mx, it.second);
        return mx;
    }
};