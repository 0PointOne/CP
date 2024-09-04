class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {
        vector<int> cnt(11, 0);
        for(int i = 0; i < bills.size(); i++){

            if(bills[i] == 5) cnt[5]++;

            else if(bills[i] == 10){
                cnt[10]++;
                if(cnt[5]) cnt[5]--;
                else return false;
            }
            else if(bills[i] == 20){
                if(cnt[10] && cnt[5]) cnt[10]--, cnt[5]--;
                else if(cnt[5] >= 3) cnt[5] -= 3;
                else return false;
            }
        }
        return true;
    }
};