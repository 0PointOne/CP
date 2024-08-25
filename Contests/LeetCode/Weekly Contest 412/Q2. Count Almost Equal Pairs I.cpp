#include<bits/stdc++.h>
#define int long long int
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;

bool isEqu(int x, int y) {

    string a = to_string(x), b = to_string(y);
    
    while(a.length() < b.length()) a = "0" + a;
    while(b.length() < a.length()) b = "0" + b;

    int diff = 0;
    vector<int> idx;
    
    for(int i = 0; i < a.length(); i++){
        if(a[i] != b[i]){
            diff++;
            idx.push_back(i);
            if(diff > 2)  return false;
        }
    }
    if(diff == 0) return true;

    if(diff == 2){
        string c = a;
        int k = idx[0], l = idx[1];
        swap(c[k], c[l]);
        return c == b;
    }
    return false;
}

int countPairs(vector<int>& nums) {
    int n = nums.size();
    int ans = 0;
    
    for(int i = 0; i < n; i++){
        for(int j = i + 1; j < n; j++){
            if(isEqu(nums[i], nums[j])) ans++;
        }
    }
    return ans;
}

void solve(){

    int n;  cin >> n;
    vector<int> v(n);
    for(int i = 0; i < n; i++)  cin >> v[i];
    cout << countPairs(v);
}

signed main(){
    fast;
    int t = 1;
    // cin >> t;
    while(t--){solve();}
    return 0;
}