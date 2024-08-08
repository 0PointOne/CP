class Solution {
public:
    string con(int n){

        vector<string> num = {"Zero", "One", "Two", "Three", "Four", "Five", "Six", "Seven", "Eight", "Nine"};
        vector<string> teen = {"Ten", "Eleven", "Twelve", "Thirteen", "Fourteen", "Fifteen", "Sixteen", "Seventeen", "Eighteen", "Nineteen"};
        vector<string> twoDig = {"", "", "Twenty", "Thirty", "Forty", "Fifty", "Sixty", "Seventy", "Eighty", "Ninety"};

        string ans = "";
        if(n > 99)     ans += num[n / 100] + " Hundred ";
        n %= 100;
        if(n < 20 && n > 9)   ans += teen[n - 10] + " ";
        else{
            if(n >= 20)  ans += twoDig[n / 10] + " ";
            n %= 10;
            if(n > 0)  ans += num[n] + " ";
        }
        return ans;
    }
    string numberToWords(int num) {
        if(num == 0) return "Zero";
        
        string ver[] = {"Thousand", "Million", "Billion"};
        string ans = con(num % 1000);
        num /= 1000;

        for(int i = 0; i < 3; i++){
            if(num > 0 && num % 1000 > 0)    ans = con(num % 1000) + ver[i] + " " + ans;
            num /= 1000;
        }
        while(ans.back() == ' ') ans.pop_back();
        return ans;
    }
};