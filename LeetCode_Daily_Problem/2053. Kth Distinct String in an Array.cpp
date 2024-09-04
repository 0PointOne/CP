class Solution {
public:
    string kthDistinct(vector<string>& arr, int k) {

        unordered_map<string, int> mp;

        for(string s: arr)   mp[s]++;

        for(auto &s: arr){
            if(mp[s] == 1 && --k == 0) return s;
        }
        return "";
    }
};