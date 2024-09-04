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


void solve(){

    int n, k, a, b; cin >> n >> k >> a >> b;
    vector< pair<int, int> > cor(n);
    for(int i = 0; i < n; i++)  cin >> cor[i].ff >> cor[i].ss;
    debug(cor);

    int x1 = cor[a-1].ff, y1 = cor[a-1].ss;
    int x2 = cor[b-1].ff, y2 = cor[b-1].ss;

    bool ist = false, ist2 = false;
    int mn = LLONG_MAX, mn2 = LLONG_MAX;
    for(int i = 0; i < k; i++){
        int dis = abs(cor[a-1].ff - cor[i].ff) + abs(cor[a-1].ss - cor[i].ss);
        if(dis < mn){
            ist = true;
            mn = dis;
            x1 = cor[i].ff; y1 = cor[i].ss;
        } 
        int dis2 = abs(cor[b-1].ff - cor[i].ff) + abs(cor[b-1].ss - cor[i].ss);
        if(dis2 < mn2){
            ist2 = true;
            mn2 = dis2;
            x2 = cor[i].ff; y2 = cor[i].ss;
        }
    }

    int ans = abs(cor[a-1].ff - cor[b-1].ff) + abs(cor[a-1].ss - cor[b-1].ss);
    if(ist && ist2){

        int ans1 = abs(cor[a-1].ff - x1) + abs(cor[a-1].ss - y1)  + abs(cor[b-1].ff - x2) + abs(cor[b-1].ss - y2);
        cout << min(ans1, ans) << nline;    
    }
    else{
        cout << ans << nline;
    }
}

signed main() {
#ifndef ONLINE_JUDGE
    freopen("Error.txt", "w", stderr);
#endif

    fastio();
    int t = 1;   	
    cin >> t;
    while(t--){     solve(); }
    return 0;
}