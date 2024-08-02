class Solution {
public:
    int countSeniors(vector<string>& details) {
        int n = details.size();

        int passenger = 0;
        for(int i = 0; i < details.size(); i++){
            int age = 10 * (details[i][11] - '0') + (details[i][12] - '0');

            if(age > 60) passenger++;
        }
        return passenger;
    }
};