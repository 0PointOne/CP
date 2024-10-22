class Solution {
public:
    int countPrimes(int n) {
        if(n < 2) return 0;
        vector<bool> pr(n, true);
        pr[0] = pr[1] = false;
        for(int i = 2; i * i < n; i++){
            if(pr[i]){
                for(int j = i * i; j < n; j += i) pr[j] = false;
            }
        }
        int cnt = 0;
        for(int i = 2; i < n; i++){
            if(pr[i]) cnt++;
        }
        return cnt;
    }
};