#include<bits/stdc++.h>
using namespace std;

int main(){
    
    int t;  cin >> t;
    while(t--){
        int n;  cin >> n;

        int mx1 = INT_MIN, mx2 = INT_MIN;
        int mx1_idx = -1, mx2_idx = -1;

        int num;
        for(int i = 0; i < n; i++){
            cin >> num;
            if(mx1 < num){

                mx2 = mx1;
                mx2_idx = mx1_idx;

                mx1 = num;
                mx1_idx = i;
            }
            else if(mx2 < num){
                mx2 = num;
                mx2_idx = i;
            }

        }
        cout << min(mx1_idx, mx2_idx) << " " << max(mx1_idx, mx2_idx) << endl;

    }
    
    return 0;
}