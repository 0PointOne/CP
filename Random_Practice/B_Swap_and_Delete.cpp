#include<bits/stdc++.h>
#define endl "\n"
#define ll long long
#define s(a, b) a+b
#define v_all v.begin(), v.end()
#define mod 100000007
#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define print_v(v) for(auto it : v) cout << it << " "; cout << endl;
#define print_v_pair(v) for(auto it: v) cout << it.first << " " << it.second << endl;
#define input_v for(auto &it : v)   cin >> it;
using namespace std;

void solve1(){
    string str;   cin >> str;
    vector<int> cnt(2, 0);

    for(int i = 0; i < str.size(); i++){
        cnt[str[i] - '0']++;
    }  

    for(int i = 0; i <= str.size(); i++){

        if(i == str.size() || cnt[1 - (str[i] - '0')] == 0){
            cout << str.size() - i << endl;
            break;
        }

        cnt[1 - (str[i] - '0')]--;
    }

    return;
    
}

void solve(){
    
    string str;   cin >> str;
    vector<int> zero, one;

    for(int i = 0;  i < str.size(); i++){
        if(str[i] == '0')   zero.push_back(i);
        else                one.push_back(i);
    }

    string ans_str = str;
    int i = 0, j = 0;
    while(i < zero.size() && j < one.size()){
        swap(ans_str[zero[i++]], ans_str[one[j++]]);
    }
    

    int ans = 0;
    j = 0;
    for(int i = 0; i < str.size(); i++){
        if(str[j] == ans_str[i]){
            ans++;
        }
        else{
            j++;
        }
    }
    cout << ans << endl;
}

int main(){
    fast_io;

    int t = 1;
    cin >> t;
    while(t--){
        // solve();
        solve1();
    }

    return 0;
}