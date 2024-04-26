#include<bits/stdc++.h>
using namespace std;

#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define MOD 1000000007
#define MOD1 998244353
#define m 1e18
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

    int n, c;   cin >> n >> c;
    
    __int128_t a = 0, b = 0;
    int si;
    for(int i = 0; i < n; i++){
        cin >> si;
        a += 4;
        b += (4 * si) * 1LL;
        c -= (si * si) * 1LL;
    }
    c *= -1;

    __int128_t ans = (-b + sqrtl( b * b - (4 * a * c)) ) / (2 * a);
    cout << (int)ans << nline;

    //#  Or: (Using Binary Search)
    /* 
    int n, c;   cin >> n >> c;
    vector<int> v(n);
    for(int i = 0; i < n; i++)  cin >> v[i];

    int l = 1, e = 1e9;
    while(l <= e){
        __int128_t w = (l + e) / 2;

        __int128_t area = 0;
        for(int i = 0; i < n; i++){
            area += ((v[i] + (2 * w)) * (v[i] + (2 * w))) * 1LL;
        }

        if(area == c){
            cout << (int)w << "\n";
            return;
        }

        else if(area > c)  e = w - 1;
        else               l = w + 1;
    }
    debug("\n") 
    */
    
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