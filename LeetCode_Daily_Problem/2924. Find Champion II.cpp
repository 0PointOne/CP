class Solution {
public:
    int findChampion(int n, vector<vector<int>>& edges) {
        vector<int> fr(n);
        for(auto d: edges){
            fr[d[1]]++;
        }
        int ans = -1, count = 0;
        for(int i = 0; i < n; i++){
            if(fr[i] == 0){
                count++;
                ans = i;
            }
        }
        return count > 1 ? -1 : ans;
    }
};