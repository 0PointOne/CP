class Solution {
public:
    int takeCharacters(string s, int k) {
        int n = s.size();
        vector<int> fre(3, 0);
        for(int i = 0; i < n; i++){
            fre[s[i] - 'a']++;
        }

        for(int i = 0; i < 3; i++){
            if(fre[i] < k){
                return -1;
            }
        }

        int l = 0, r = 0;
        int ans = n;
        while(r < n){
            fre[s[r] - 'a']--;
            while(l < n && fre[s[r] - 'a'] < k){
                fre[s[l] - 'a']++;
                l++;
            }
            ans = min(ans, n - (r - l + 1));
            r++;
        }
        return ans;


    }
};