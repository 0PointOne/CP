class Solution {
public:
    int findComplement(int num) {
        string binary = "";
        while(num){
            binary += (num % 2 + '0');
            num /= 2;
        }
        for(int i = 0; i < binary.size(); i++) 
            binary[i] = (binary[i] == '0' ? '1' : '0');

        int po = 0, ans = 0;
        for(int i = 0; i < binary.size(); i++){
            ans += ((binary[i] - '0') * pow(2, po));
            po++;
        }
        return ans;
    }
};