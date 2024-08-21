class Solution {
public:

    int minSteps(int n) {
        if(n == 1) return 0;
        int op = 0;
        while(1){
            bool isPri = true;
            for(int i = 2; i * i <= n; i++){
                if(n % i == 0){
                    op += i;
                    n -= n/i * (i-1);
                    isPri = false;
                    break;
                }
            }
            if(isPri){
                op += n;
                break;
            }
        }
        return op;
    }
};