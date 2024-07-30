class Solution {
public:
    int minimumDeletions(string s) {

        int b = 0, ans = 0;
        for(int i = 0; i < s.size(); i++){
            if(s[i] == 'b') b++;
            else            ans = min(b, ans+1);
        }

        return ans;
    }
};