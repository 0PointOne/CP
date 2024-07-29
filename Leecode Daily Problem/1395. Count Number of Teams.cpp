class Solution {
public:
    int numTeams(vector<int>& rating) {

        int cnt = 0;
        int n = rating.size();

        for(int m = 1; m < n - 1; ++m){

            int smBe = 0, laAf = 0;
            int laBe = 0, smAf = 0;

            for(int l = 0; l < m; l++){

                if(rating[l] < rating[m])   smBe++;
                else   laBe++;
            }

            for(int r = m + 1; r < n; r++){

                if(rating[m] < rating[r])  laAf++;
                else        smAf++;
            }

            cnt += smBe * laAf + laBe * smAf;
        }

        return cnt;
    }
    
};