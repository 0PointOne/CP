class Solution {
public:
    vector<int> decrypt(vector<int>& code, int k) {

        int n = code.size();
        for(int i = 0; i < n; i++) code.push_back(code[i]);

        for(int i = 1; i < 2*n; i++) code[i] += code[i-1];
        vector<int> ans(n, 0);
        if(k > 0){
            for(int i = 0; i < n; i++)  ans[i] = (code[i+k] - code[i]);
        }
        else{
            for(int i = n; i < 2*n; i++) ans[i-n] = (code[i-1] - code[i+k-1]);
        }
        return ans;
    }
};