#include<bits/stdc++.h>
using namespace std;

#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define MOD 1000000007
#define MOD1 998244353
#define INF 1e18
#define nline "\n"
#define pb push_back
#define ppb pop_back
#define mp make_pair
#define ff first
#define ss second
#define int long long
#define PI 3.141592653589793238462
#define set_bits __builtin_popcountll
#define sz(x) ((int)(x).size())
#define all(x) (x).begin(), (x).end()

typedef unsigned long long ull;
typedef long double lld;

#ifndef ONLINE_JUDGE
#define debug(x) cerr << #x <<" "; _print(x); cerr << nline;
#else
#define debug(x)
#endif

void _print(int t) {cerr << t;}
void _print(string t) {cerr << t;}
void _print(char t) {cerr << t;}
void _print(lld t) {cerr << t;}
void _print(double t) {cerr << t;}
void _print(ull t) {cerr << t;}

template <class T, class V> void _print(pair <T, V> p);
template <class T> void _print(vector <T> v);
template <class T> void _print(set <T> v);
template <class T, class V> void _print(map <T, V> v);
template <class T> void _print(multiset <T> v);
template <class T, class V> void _print(pair <T, V> p) {cerr << "{"; _print(p.ff); cerr << ","; _print(p.ss); cerr << "}";}
template <class T> void _print(vector <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T> void _print(set <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T> void _print(multiset <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T, class V> void _print(map <T, V> v) {cerr << "[ "; for (auto i : v) {_print(i); cerr << " ";} cerr << "]";}

const int N = 1005;
char grid[N][N];
bool vis[N][N];
bool dotVis[N][N];
int ans = 0;

int n, m;

vector<pair<int, int>> dir = {{-1, 0}, {0, 1}, {1, 0}, {0, -1}};

bool isValid(int x, int y){
    return x >= 0 && x < n && y >= 0 && y < m;
}

bool isMeg(int x, int y){
    
    for(auto it: dir){
        int r = it.ff + x, c = it.ss + y;
        if(isValid(r, c) && grid[r][c] == '#') return false;
    }
    return true;
}

void bfs(int sr, int sc){
    set<pair<int, int> > st;

    queue<pair<int, int> > q;
    dotVis[sr][sc] = 1;
    q.push({sr, sc});

    int cnt = 0;
    while(!q.empty()){

        pair<int, int> pr = q.front();
        q.pop();
        cnt++;

        for(auto it: dir){

            int r = pr.ff + it.ff, c = pr.ss + it.ss;

            if(isValid(r, c) && isMeg(r, c) && !dotVis[r][c]){
                q.push({r, c});
                dotVis[r][c] = 1;
            }
        }

        for(auto it: dir){
            int r = pr.ff + it.ff, c = pr.ss + it.ss;
            if(isValid(r, c) && grid[r][c] == '.' && !dotVis[r][c]){
                st.insert({r, c});
            }
        }       
    }

    ans = max(ans, cnt + sz(st));
}

void solve(){

    
    cin >> n >> m;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cin >> grid[i][j];
            if(grid[i][j] == '.') ans = 1;
        }
    }

    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){

            if(grid[i][j] == '.' && !vis[i][j] && isMeg(i, j))      bfs(i, j);
        }
    }
    
    cout << ans << nline;
}

signed main() {
#ifndef ONLINE_JUDGE
    freopen("Error.txt", "w", stderr);
#endif

    fastio();
    int t = 1;   	
    // cin >> t;
    while(t--){     solve(); }
    return 0;
}