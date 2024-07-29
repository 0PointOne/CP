#include<bits/stdc++.h>
#define int long long int
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;

void solve(){

    int h, w;   cin >> h >> w;
    int si, sj; cin >> si >> sj;
    si--; sj--;

    vector<vector<char> > grid(h, vector<char>(w));
    for(int i = 0; i < h; i++){
        for(int j = 0; j < w; j++) cin >> grid[i][j];
    }

    auto isValid = [&](int x, int y){
        return x < h && y < w && x >= 0 && y >= 0 && grid[x][y] == '.';
    };

    string x;   cin >> x;
    for(int i = 0; i < x.size(); i++){

        int mi = si, mj = sj;
        if(x[i] == 'L') mj -= 1;
        else if(x[i] == 'R') mj += 1;
        else if(x[i] == 'U') mi -= 1;
        else if(x[i] == 'D') mi += 1;

        if(isValid(mi, mj)){
            si = mi, sj = mj;
        }

    }
    cout << si + 1 << " " << sj + 1;

}

signed main(){
    fast;
    int t = 1;
    // cin >> t;
    while(t--){solve();}
    return 0;
}