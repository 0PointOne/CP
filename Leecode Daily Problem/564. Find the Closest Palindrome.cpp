class Solution {
public:
    string nearestPalindromic(string n) {
        if(n == "10" || n == "11") return "9";
        long long sz = n.size();
        long long nn = 0;
        for(long long i = 0; i < sz; i++)   nn = nn * 10 + (n[i] - '0');

        if(sz & 1){
            long long mid = sz / 2;
            long long num = 0;
            for(long long i = 0; i <= mid; i++)   num = num * 10 + (n[i] - '0');
            
            long long op1 = num + 1, op2 = num - 1;
            string a = to_string(op1), b = to_string(op2), c = to_string(num);
            
            for(long long i = sz/2 - 1; i >= 0; i--)  a += a[i];
            for(long long i = sz/2 - 1; i >= 0; i--)  b += b[i];
            for(long long i = sz/2 - 1; i >= 0; i--)  c += c[i];
            
            long long x = 0, y = 0, z = 0;
            for(long long i = 0; i < a.size(); i++) x = x * 10 + (a[i] - '0');
            for(long long i = 0; i < b.size(); i++) y = y * 10 + (b[i] - '0');
            for(long long i = 0; i < c.size(); i++) z = z * 10 + (c[i] - '0');

            x = abs(nn - x), y = abs(nn - y), z = abs(nn - z);
            long long mn = (z == 0 ?  min(x, y) : min({x, y, z}));

            if(mn == y) return b;
            if(mn == z) return c;
            if(mn == x) return a;
        }
        else{
            long long mid = sz / 2;
            long long num = 0;
            for(long long i = 0; i < mid; i++)  num = num * 10 + (n[i] - '0');

            long long op1 = num + 1, op2 = num - 1;
            string a = to_string(op1), b = to_string(op2), c = to_string(num);
            
            for(long long i = sz/2 - 1; i >= 0; i--)  a += a[i];
            for(long long i = sz/2 - 1; i >= 0; i--)  b += b[i];
            for(long long i = sz/2 - 1; i >= 0; i--)  c += c[i];

            if(b.size() < c.size()) b[b.size()/2] = '9';

            long long x = 0, y = 0, z = 0;
            for(long long i = 0; i < a.size(); i++) x = x * 10 + (a[i] - '0');
            for(long long i = 0; i < b.size(); i++) y = y * 10 + (b[i] - '0');
            for(long long i = 0; i < c.size(); i++) z = z * 10 + (c[i] - '0');

            x = abs(nn - x), y = abs(nn - y), z = abs(nn - z);
            long long mn = (z == 0 ?  min(x, y) : min({x, y, z}));
            
            
            if(mn == y) return b;
            if(mn == z) return c;
            if(mn == x) return a;
        }
        return n;
    }
};