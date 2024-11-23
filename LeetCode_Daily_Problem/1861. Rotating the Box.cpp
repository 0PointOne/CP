class Solution {
public:
    vector<vector<char>> rotateTheBox(vector<vector<char>>& a) {
        int n = a.size(), m = a[0].size();
        vector<vector<char>> b(m, vector<char>(n, '.'));

        for(int i = 0; i < n; i++){
            int d = m-1;
            for(int j = m-1; j >= 0; j--){
                if(a[i][j] == '#'){
                    b[d][n-i-1] = '#';
                    d--;
                }
                else if(a[i][j] == '*'){
                    b[j][n-i-1] = '*';
                    d = j-1;
                }
            }
        }
        return b;
    }
};