class Solution {
public:
    int maxDistance(vector<vector<int>>& arrays) {
        
        int l = arrays[0][0], e = arrays[0].back();
        int mx = 0;

        for (int i = 1; i < arrays.size(); i++){
            mx = max({mx, abs(arrays[i].back() - l), abs(e - arrays[i][0])});
            l = min(l, arrays[i][0]);
            e = max(e, arrays[i].back());
        }
        return mx;
    }
};