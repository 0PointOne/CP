#include<bits/stdc++.h>
#define int long long int
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;

bool sol(int x, int y, vector<tuple<int, int, int>>& v, int sec, map<tuple<int, int, int>, int>& dp){

    if(v.size()-1-sec < (abs(get<1>(v.back()) - x) + abs(get<2>(v.back()) - y)) ) return false;
    if(x == get<1>(v[sec]) && y == get<2>(v[sec])){
        return true;
    }
    if(dp[{x, y, sec}] == 1) return true;
    else if(dp[{x, y, sec}] == 2) return false;

    bool ist = sol(x+1, y, v, sec+1, dp) || sol(x-1, y, v, sec+1, dp) || sol(x, y+1, v, sec+1, dp) || sol(x, y-1, v, sec+1, dp);
    if(ist) dp[{x, y, sec}] = 1;
    else dp[{x, y, sec}] = 2;
    return ist;
}   

void solve(){

    int n, x, y;    cin >> n >> x >> y;
    string s;   cin >> s;

    vector<tuple<int, int, int>> v;
    v.push_back({0, 0, 0});

    for(int i = 0; i < s.size(); i++){

        int sec = i+1;
        int x = get<1>(v[i]);
        int y = get<2>(v[i]);

        if(s[i] == 'R')      x++;
        else if(s[i] == 'L') x--;
        else if(s[i] == 'D') y--;
        else                 y++;
        v.push_back({sec, x, y});
    }
    map<tuple<int, int, int>, int> dp;
    cout << (sol(x, y, v, 0, dp) ? "Yes"  :  "No") << "\n";
}

signed main(){
    fast;
    int t = 1;
    cin >> t;
    while(t--){solve();}
    return 0;
}