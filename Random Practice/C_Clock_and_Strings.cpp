#include <iostream>
#include <algorithm>

using namespace std;

int ans(int n, int arr[][3]) {

    int dp[n + 1][3] = {0};

    for(int i = 1; i <= n; i++){

        for(int j = 0; j < 3; j++){

            for(int k = 0; k < 3; k++){
                if(j != k)     dp[i][j] = max(dp[i][j], dp[i - 1][k] + arr[i - 1][j]);
                
            }
        }
    }

    return max({dp[n][0], dp[n][1], dp[n][2]});
}

int main() {
    int num;
    cin >> num;
    int arr[num][3];

    for(int i = 0; i < num; ++i)   cin >> arr[i][0] >> arr[i][1] >> arr[i][2];
    

    cout << ans(num, arr) << endl;

    return 0;
}

