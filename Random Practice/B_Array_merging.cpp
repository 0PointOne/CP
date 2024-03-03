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


void solve(){

    int n;  cin >> n;
    vector<int> fr(2 * n + 1, 0);

    int mx = INT_MIN;

    int cnt = 0, num, adj = 0;
    for(int i = 0; i < n; i++){
        cin >> num;
        mx = max(mx, num);

        if(cnt == 0){
            adj = num;
            cnt++;
        }
        else if(adj == num){
            cnt++;
        }
        else if(adj != num){
            if(fr[adj] < cnt)   fr[adj] = cnt;

            cnt = 1;
            adj = num;
        }

    }
    if(fr[adj] < cnt)   fr[adj] = cnt;
    debug(fr)

    vector<int> fr1(2 * n + 1, 0);
    cnt = 0, adj = 0;
    for(int i = 0; i < n; i++){
        cin >> num;
        mx = max(mx, num);

        if(cnt == 0){
            adj = num;
            cnt++;
        }
        else if(adj == num){
            cnt++;
        }
        else if(adj != num){
            if(fr1[adj] < cnt)   fr1[adj] = cnt;

            cnt = 1;
            adj = num;
        }

    }
    if(fr1[adj] < cnt)   fr1[adj] = cnt;


    debug(mx);
    int ans = 0;
    for(int i = 0; i <= mx; i++)    ans = max(ans, fr[i] + fr1[i]);

    cout << ans << nline;

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