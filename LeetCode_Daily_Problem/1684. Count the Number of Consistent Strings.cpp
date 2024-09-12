class Solution {
public:
    int countConsistentStrings(string allowed, vector<string>& words) {
        vector<int> fr(26, 0);
        for(int i = 0; i < allowed.size(); i++){
            fr[allowed[i] - 'a']++;
        }

        int cnt = 0;
        for(int i = 0; i < words.size(); i++){
            bool isT = true;
            for(int j = 0; j < words[i].size(); j++){
                if(fr[words[i][j] - 'a'] == 0){
                    isT = false;
                    break;
                }
            }
            if(isT) cnt++;
        }
        return cnt;
    }
};