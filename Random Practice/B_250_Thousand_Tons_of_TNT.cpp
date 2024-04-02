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
#define print_v(v) for(auto it : v) cout << it << " "; cout << nline;
#define print_v_pair(v) for(auto it: v) cout << it.first << " " << it.second << nline;
#define input_v for(auto &it : v)   cin >> it;

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

vector<int> divi(int n){
    vector<int> v;
    for(int i = 1; i * i <= n; i++){
        if(n % i == 0){
            v.push_back(i);
            if(n % i != i)  v.push_back(n/i);
        }
    }
    return v;
}

void solve(){

    int n;  cin >> n;
    vector<int> v(n), pf(n + 1);
    input_v(v);
    vector<int> di = divi(n);
    sort(all(di));

    for(int i = 1; i <= n; i++)      pf[i] = pf[i-1] + v[i-1];
    
    int ans = *max_element(all(v)) - *min_element(all(v));
    map<int, pair<int, int> > mp;

    for(int i = 1; i <= n; i++){
        for(int j = 1; j < di.size()-1; j++){
            if( i % di[j] == 0){

                int k = pf[i] - pf[i - di[j]];
                if(!mp.count(di[j])){
                    mp[di[j]].ff = k;
                    mp[di[j]].ss = k;
                }
                else{
                    if(mp[di[j]].ff > k)    mp[di[j]].ff = k;
                    if(mp[di[j]].ss < k)    mp[di[j]].ss = k;
                }
            }
        }
    }

    for(auto it: mp){
        ans = max(ans, it.ss.ss - it.ss.ff);
    }

    cout << ans << endl;
    
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