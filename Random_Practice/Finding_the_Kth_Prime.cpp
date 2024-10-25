#include<bits/stdc++.h>
#define int long long int
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;

const int N = 90000001;
bool pri[N];
vector<int> ans;

void solve(){

    int n;  cin >> n;
    cout << ans[n-1] << "\n";

}

signed main(){
    fast;

    for(int i = 2; i * i <= N; i++){
        if(!pri[i]){
            for(int j = i * i; j <= N; j += i){
                pri[j] = true;
            }
        }
    }
    for(int i = 2; i <= N; i++){
        if(!pri[i])  ans.push_back(i);
    }
    cout << ans.size() << " -> ans\n";

    int t = 1;
    cin >> t;
    while(t--){solve();}
    return 0;
}