class Solution {
public:
    string fractionAddition(string s) {
        vector<pair<int, int> > num;
        int n = s.size();
        int pro = 1;
        for(int i = 0; i < n; i++){
            if(s[i] == '/'){
                int lob = 0;
                int j = i-1;
                int po = 1;
                while(j >= 0 && s[j] >= '0' && s[j] <= '9'){
                    lob = (s[j] - '0') * po + lob;
                    po *= 10;
                    j--;
                }
                if(j >= 0 && s[j] == '-') lob *= -1;
                int hor = 0;
                j = i + 1;
                while(j < n && s[j] >= '0' && s[j] <= '9'){
                    hor = hor * 10 + (s[j] - '0');
                    j++;
                }
                i = j - 1;
                pro *= hor;
                num.push_back({lob, hor});
            }
        }

        int sum = 0;
        for(int i = 0; i < num.size(); i++)   sum += (pro / num[i].second) * num[i].first;
        
        for(int i = 2; i <= min((sum < 0 ?  sum * -1 : sum), (pro < 0 ? pro * -1 : pro)); i++){
            if(sum % i == 0 && pro % i == 0){
                sum /= i;
                pro /= i;
                i--;
            }
        }
        string t = "1";
        if(sum != 0) t = to_string(pro);
        return to_string(sum) + '/' + t;
    }
};