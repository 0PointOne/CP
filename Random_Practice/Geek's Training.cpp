#include<bits/stdc++.h>
int ninjaTraining(int n, vector<vector<int>> &v)
{
    // Write your code here.
    for(int i = 1; i < n; i++){
        for(int j = 0; j < 3; j++){
            int mx = v[i][j];
            for(int k = 0; k < 3; k++){
                if(k != j) mx = max(mx, v[i][j] + v[i-1][k]);
            }
            v[i][j] = mx;
        }
    }
    int ans = INT_MIN;
    for(int i = 0; i < 3; i++){
        ans = max(ans, v[n-1][i]);
    }
    return ans;
}