#include<bits/stdc++.h>
#define int long long int
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;

void solve(){

    string s;   cin >> s;

    int changes = 0, idx = -1;

    int left = 0, right = s.size()-1;
    while(left < right){
        if(s[left] == s[right]){
            left++;
            right--;
        }
        else{
            changes++;
            if(left + 1 <= right && s[left+1] == s[right] && s[left+2] == s[right-1]) idx = left, left++;
            else if(right-1 >= left && s[right-1] == s[left]) idx = right, right--;
            else changes++, left++, right--;
        }
    }
    cout << (changes == 1 ?  idx : -1) << "\n";

}

signed main(){
    fast;
    int t = 1;
    cin >> t;
    while(t--){solve();}
    return 0;
}