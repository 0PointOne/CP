class Solution {
public:
    long long maxPoints(vector<vector<int>>& points) {

        int n = points.size(), m = points[0].size();
        vector<long long> v(m), temp(m);

        for(auto row: points){

            long long mx = 0;
            for(int j = m-1; j >= 0; j--){
                mx = max(mx, v[j]);
                temp[j] = mx--;
            }

            mx = 0;
            for(int j = 0; j < m; j++){
                mx = max(mx, v[j]);
                v[j] = max(mx--, temp[j]) + row[j];
            }
        }

        return *max_element(v.begin(), v.end());
    }
};