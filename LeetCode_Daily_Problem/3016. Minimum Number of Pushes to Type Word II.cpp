class Solution {
public:
    int minimumPushes(string word) {

        vector<int> cnt(26,0);
        for(int i = 0; i < word.size(); i++)      cnt[word[i] - 'a']++;
        
        sort(cnt.begin(),cnt.end(),greater());
        
        int ans = 0, sum = 0;
        for(int i = 0; i < 26; i++){

            if(i % 8 == 0)          sum++;
            ans += (cnt[i] * sum);
        }
        return ans;
    }
};