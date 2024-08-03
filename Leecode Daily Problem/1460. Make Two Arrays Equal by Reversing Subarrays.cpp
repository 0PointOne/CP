class Solution {
public:
    bool canBeEqual(vector<int>& target, vector<int>& arr) {
        vector<int> fr(1001, 0);
        for(int i = 0; i < target.size(); i++){
            fr[target[i]]++;
        }
        for(int i = 0; i < arr.size(); i++){
            fr[arr[i]]--;
        }
        for(int i = 0; i < 1001; i++){
            if(fr[i]) return false;
        }
        return true;
    }
};