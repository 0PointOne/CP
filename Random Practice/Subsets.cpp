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


int count_Subset_sum(vector<int> &v, int n, int sum, vector< vector<int> > &dp){
    
    if(n == 0){
        if(sum == 0)  return 1;
        else        return 0;
    }

    if(dp[n][sum] != -1)    return dp[n][sum];
    if(v[n-1] <= sum){
        int op1 = count_Subset_sum(v, n-1, sum - v[n-1], dp);
        int op2 = count_Subset_sum(v, n-1, sum, dp);

        return dp[n][sum] = (op1 + op2);
    }
    
    return dp[n][sum] = count_Subset_sum(v, n - 1, sum, dp);
    
    
}

void solve(){

    int n, diff;
    cin >> n >> diff;
    vector<int> v(n);

    int sum = 0;
    for(int i = 0; i < n; i++){
        cin >> v[i];
        sum += v[i];
    }   

    int target_sum = diff + sum;

    if(target_sum & 1){
        cout << 0 << endl;
        return;
    }
    else{
        target_sum /= 2;
    }

    vector< vector<int> > dp(n+1, vector<int>(target_sum+1, -1));

    cout << count_Subset_sum(v, n, target_sum, dp) << nline;
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