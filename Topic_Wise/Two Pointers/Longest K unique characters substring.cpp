class Solution{
  public:
    int longestKSubstr(string s, int k) {
    // your code here
        map<char, int> mp;
        int ans = INT_MIN, n = s.size();
        int l = 0, r = 0;
        
        while(r < n){
        
            mp[s[r]]++;
            
            if(mp.size() == k)  ans = max(ans, r - l + 1);
            
            else{
                while(l <= r && mp.size() > k){
                    mp[s[l]]--;
    
                    if(!mp[s[l]])   mp.erase(s[l]);
                    l++;
                }
    
                if(mp.size() == k)    ans = max(ans, r - l + 1);
            }
            
            r++;

        }
        
        if(mp.size() == k)  ans = max(ans, r - l);
        
        return (ans == INT_MIN ?  -1 : ans);
    }
};