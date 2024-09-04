class Solution {
public:
    string stoneGameIII(vector<int>& s) {
        int n = s.size();
        int a = 0, b = 0, c = 0;

        int i = n-1;
        while(i >= 0){
            int ans = INT_MIN;
            ans = max(ans, s[i] - a);
            if(i+1 < s.size()) ans = max(ans, s[i]+s[i+1] - b);
            if(i+2 < s.size()) ans = max(ans, s[i]+s[i+1]+s[i+2] - c);
            c = b;
            b = a;
            a = ans;
            i--;
        }
        if(a == 0) return "Tie";
        else if(a > 0) return "Alice";
        return "Bob";
    }
};