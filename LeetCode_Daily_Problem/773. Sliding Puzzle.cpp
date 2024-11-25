class Solution {
public:
    int slidingPuzzle(vector<vector<int>>& v) {
        string ans = "123450";
        vector<vector<int>> dir = {{1, 3}, {0, 2, 4}, {1, 5}, {0, 4}, {1, 3, 5}, {2, 4}};
        set<string> vis;
        queue<string> q;

        string k = "";
        for(auto i: v){
            for(auto j: i){
                k += (j + '0');
            }
        }
        q.push(k);
        vis.insert(k);

        int op = 0;
        while(!q.empty()){
            int sz = q.size();
            while(sz--){
                string curr = q.front();
                q.pop();

                if(curr == ans) return op;
                int zIdx = curr.find('0');

                for(auto i: dir[zIdx]){
                    string next = curr;
                    swap(next[i], next[zIdx]);
                    if(!vis.count(next)){
                        vis.insert(next);
                        q.push(next);
                    }
                }
            }
            op++;
        }
        return -1;
    }
};