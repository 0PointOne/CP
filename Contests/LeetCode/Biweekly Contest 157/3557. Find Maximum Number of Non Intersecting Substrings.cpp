class Solution {
public:
    int maxSubstrings(string word) {
        vector<vector<int>> v(26);
        int n = word.size();
        for(int i = 0; i < n; i++){
            int k = word[i] - 'a';
            v[k].push_back(i);
        }

        vector<int> curIdx(26, 0);
        int count = 0;
        while(1){
            int mn = INT_MAX;
            for(int i = 0; i < 26; i++){
                int idx = curIdx[i];
                int end = idx+1;
                int dis = 0;
                while(end < v[i].size() && v[i][end] - v[i][idx] < 3) end++;
                if(end < v[i].size() && v[i][end] - v[i][idx] >= 3) mn = min(mn, v[i][end]);
            }

            if(mn == INT_MAX)   break;
            count++;
            for(int i = 0; i < 26; i++){
                while(curIdx[i] < v[i].size() && v[i][curIdx[i]] <= mn) curIdx[i]++;
            }
        }
        return count;
    }
};