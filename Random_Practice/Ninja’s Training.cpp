//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    int maximumPoints(vector<vector<int>>& arr, int n) {
        // Code here
        for(int i = 1; i < n; i++){
            for(int j = 0; j < 3; j++){
                int mx = arr[i][j];
                for(int k = 0; k < 3; k++){
                    if(j != k){
                        mx = max(mx, arr[i-1][k] + arr[i][j]);
                    }
                }
                arr[i][j] = mx;
            }
        }
        int mx = 0;
        for(int i = 0; i < 3; i++){
            mx = max(mx, arr[n-1][i]);
        }
        return mx;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<vector<int>> arr;
        for (int i = 0; i < n; ++i) {
            vector<int> temp;
            for (int j = 0; j < 3; ++j) {
                int x;
                cin >> x;
                temp.push_back(x);
            }
            arr.push_back(temp);
        }

        Solution obj;
        cout << obj.maximumPoints(arr, n) << endl;
        cout << "~" << endl;
    }
    return 0;
}
// } Driver Code Ends