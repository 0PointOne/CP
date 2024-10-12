#include<bits/stdc++.h>
#define int long long int
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;

void solve(){

    int n;  cin >> n;
    vector<int> nums(n);
    for(int i = 0; i < n; i++)  cin >> nums[i];
    vector<int> ans(n);

    for(int i = 0; i < nums.size(); i++){

        int mx = 31 - __builtin_clz(nums[i]) + 1;
        int mn = INT_MAX;

        for(int j = mx-1; j >= 0; j--){

            if( ( (nums[i] >> j) & 1) ){
                int a = nums[i];
                a = (a & (~(1 << j)));

                if((a | (a + 1)) == nums[i]){
                    mn = min(mn, a);
                }
            }
        }
        ans[i] = (mn == INT_MAX ? -1 : mn);
    }

    for(int i = 0; i < n; i++) cout << ans[i] << " ";
    cout << "\n";

}

signed main(){
    fast;
    int t = 1;
    //cin >> t;
    while(t--){solve();}
    return 0;
}