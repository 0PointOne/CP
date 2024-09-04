class Solution {
public:
    int getLucky(string s, int k) {
        string ans = "";
        for(int i = 0; i < s.size(); i++){
            int in = (s[i] - 'a') + 1;
            ans += to_string(in);
        }

        int res = 0;
        while(k--){
            int sum = 0;
            for(int i = 0; i < ans.size(); i++){
                sum += (ans[i] - '0');
            }
            res = sum;
            if(sum < 10) break;
            ans = to_string(sum);
        }
        return res;
    }
};