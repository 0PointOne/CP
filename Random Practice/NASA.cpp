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

vector<int> palin;
void palindrome(){
    for(int i = 0; i < (1 << 15); i++){
        string s = to_string(i);
        bool ist = true;

        int l = 0, e = sz(s) - 1;
        while(l < e){
            if(s[l] != s[e]){
                ist = false;
                break;
            }
            l++;
            e--;
        }
        if(ist) palin.push_back(i);
    }
}

void solve(){

    int n;  cin >> n;
    vector<int> v(n);
    unordered_map<int,int> mp;
    int x;
    for(int i = 0; i < n; i++){
        cin >> v[i];
        mp[v[i]]++;
    }

    int ans = n;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < palin.size(); j++){
            ans += mp[v[i] ^ palin[j]];
        }
    }
    cout << ans / 2 << nline;
}

signed main() {
#ifndef ONLINE_JUDGE
    freopen("Error.txt", "w", stderr);
#endif

    fastio();
    int t = 1;
    palindrome(); 
    cin >> t;
    while(t--){     solve(); }
    return 0;
}