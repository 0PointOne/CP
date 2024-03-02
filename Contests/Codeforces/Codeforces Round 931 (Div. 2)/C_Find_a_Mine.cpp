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
#define print_v(v) for(auto it : v) cout << it << " "; cout << endl;
#define print_v_pair(v) for(auto it: v) cout << it.first << " " << it.second << endl;
#define input_v for(auto &it : v)   cin >> it;

typedef unsigned long long ull;
typedef long double lld;

#ifndef ONLINE_JUDGE
#define debug(x) cerr << #x <<" "; _print(x); cerr << endl;
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

int que(int x, int y) {
    cout << "? " << x << " " << y << endl;
    int ans; cin >> ans; 
    return ans;
}

void solve(){


    int n, m; cin >> n >> m;

    int q1 = que(1, 1);

    int x = min(n, 1 + q1),     y = min(m, 1 + q1);

    int q2 = que(x, q1 - x + 2),    q3 = que(q1 - y + 2, y);

    bool isTrue = false;
    if((x - (q2 / 2) <= n) && (q1 - x + 2 + (q2 / 2) <= m) && (q2 % 2 == 0)){

        int q4 = que(x - (q2 / 2), q1 - x + 2 + (q2 / 2));
        isTrue = (q4 != 0);
    } 
    else isTrue = true;
    
    if(!isTrue) cout << "! " << x - (q2 / 2) << " " << q1 - x + 2 + (q2 / 2) << endl;

    else cout << "! " << q1 - y + 2 + (q3 / 2) << " " << y - (q3 / 2) << endl;
    
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