class Solution {
private:
    bool isPrime(long long n){
        if(n == 1) return 0;
        else if(n == 2) return 1;
        for(long long i = 2; i * i <= n; i++){
            if(n % i == 0) return 0;
        }
        return 1;
    }
public:
    long long sumOfLargestPrimes(string s) {
        int n = s.size();
        vector<long long> v;
        for(int i = 0; i < n; i++){
            string str = "";
            for(int j = i; j < n; j++){
                str += s[j];
                long long num = stoll(str);
                if(isPrime(num)) v.push_back(num);
            }
        }
        sort(v.begin(), v.end());
        auto it = unique(v.begin(), v.end());
        v.erase(it, v.end());
        long long sum = 0;
        int sz = v.size() - 3;
        for(int i = v.size()-1; i >= max(0, sz); i--) sum += v[i];
        return sum;
    }
};