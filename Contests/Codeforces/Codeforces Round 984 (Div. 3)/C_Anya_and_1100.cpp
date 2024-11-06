#include<bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
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
#define int long long int
#define PI 3.141592653589793238462
#define set_bits __builtin_popcountll
#define sz(x) ((int)(x).size())
#define all(x) (x).begin(), (x).end()

template <typename T> using pbds = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;  // less == set, less_equal == multiset;
typedef unsigned long long ull;
typedef long double lld;

#ifndef ONLINE_JUDGE
#define debug(x) cerr << #x <<" "; _print(x); cerr << nline;
#else
#define debug(x)
#endif

void _print(int t) {cerr << t;}
void _print(bool t) {cerr << t;}
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

    string s;   cin >> s;
    int n = s.size();
    int q;  cin >> q;

    auto isgood = [&](int l, int r){
        string g = "1100";
        string b = "";
        for(int i = l; i <= r; i++){
            b += s[i];
        }
        return g == b;
    };

    auto count = [&](int idx){
        int num = 0;
        if(idx-3 >= 0 && isgood(idx-3, idx))                num++;
        if(idx-2 >= 0 && idx+1 < n && isgood(idx-2, idx+1)) num++;
        if(idx-1 >= 0 && idx+2 < n && isgood(idx-1, idx+2)) num++;
        if(idx+3 < n && isgood(idx, idx+3))                 num++;
        return num;
    };

    int cnt = 0;
    for(int i = 0; i < s.size()-3; i++){
        if(isgood(i, i+3)) cnt++;
    }
    debug(cnt)
    while(q--){
        int idx;
        char v; cin >> idx >> v;
        idx--;
        int pre_cnt = count(idx);
        s[idx] = v;
        int cur_cnt = count(idx);

        cnt += (cur_cnt - pre_cnt);

        cout << (cnt ? "YES" : "NO") << "\n";

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