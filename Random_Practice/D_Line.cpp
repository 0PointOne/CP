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
// #define int long long int
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

bool cmp(pair<pair<int,int>, char> &a, pair<pair<int, int>, char> &b){
    return a.ff.ff > b.ff.ff;
}
void solve(){

    int n;  cin >> n;
    string s;   cin >> s;

    vector< pair< pair<int, int>, char> > v;
    long long sum = 0;
    for(int i = 0; i < n / 2; i++){

        if(s[i] == 'L'){
            sum += i;
            v.push_back({{n-i-1, i}, 'L'});
        } 
        else  sum += n - i - 1;
    }

    if(n & 1){
        sum += n / 2;
        for(int i = n / 2 + 1; i < n; i++){
            if(s[i] == 'R'){
                sum += n - i - 1;
                v.push_back({{i, i}, 'R'});
            }
            else{
                sum += i;
            }
        }
    }
    else{
        for(int i = n / 2; i < n; i++){
            if(s[i] == 'R'){
                sum += n - i - 1;
                v.push_back({{i, i}, 'R'});
            }
            else{
                sum += i;
            }
        }
    }
    
    // debug(sum)
    sort(v.begin(), v.end(), cmp);
    debug(v)

    int i = 0;
    for(auto it: v){
        int k = it.ff.ss;
        if(it.ss == 'L'){
            sum -= k;
            sum += it.ff.ff;
        }
        else if(it.ss == 'R'){
            sum -= n - k - 1;
            sum += it.ff.ff;
        }
        i++;

        cout << sum << " ";
    }

    for(; i < n; i++){
        cout << sum << " ";
    }cout << nline;
}

int main() {
#ifndef ONLINE_JUDGE
    freopen("Error.txt", "w", stderr);
#endif

    fastio();
    int t = 1;   	
    cin >> t;
    while(t--){     solve(); }
    return 0;
}