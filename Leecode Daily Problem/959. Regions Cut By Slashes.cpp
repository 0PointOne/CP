class Solution {
public:
    vector<int> par;
    vector<int> rank;
    int ans = 1;

    int findPar(int node){
        if(node == par[node])    return node;
        par[node] = findPar(par[node]);
        return par[node];
    }

    void uni(int a, int b){
        int parA = findPar(a);
        int parB = findPar(b);
        
        if(parA != parB){

            if(rank[parA] > rank[parB])         par[parB] = parA;
            else if (rank[parA] < rank[parA])   par[parA] = parB;
            else                                par[parB] = parA,  rank[parA]++;
        } 
        else   ans++;
    }

    int regionsBySlashes(vector<string>& grid) {

        int row = grid.size() + 1;
        int col = grid.size() + 1;
        int n = row * col;

        par.resize(n);
        rank.resize(n, 1);
        for(int i = 0; i < par.size(); i++)        par[i] = i;
        
        for(int i = 0; i < row; i++){
            for(int j = 0; j < col; j++){
                if(i == 0 or j == 0 or i == row - 1 or j == col - 1){
                    int p = i * row + j;
                    if(p != 0) uni(0, p);
                }
            }
        }
        
        for(int i = 0; i < grid.size(); i++){
            for(int j = 0; j < grid.size(); j++){
                if(grid[i][j] == '/'){
                    int x = i * row + (j + 1);
                    int y = (i + 1) * row + j;
                    uni(x, y);
                } 
                else if (grid[i][j] == '\\'){
                    int x = i * row + j;
                    int y = (i + 1) * row + (j + 1);
                    uni(x, y);
                }
            }
        }
        
        return ans;
    }
};