#include<bits/stdc++.h>
#define int long long int
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;

const int N = 1e6;
int v[N];
pair<int, int> tr[4*N];

void build(int n, int l , int r){
    if(l == r){
        tr[n].first = v[l];
        tr[n].second = 1;
        return;
    }
    int mid = l + (r - l) / 2;
    build(2*n, l, mid);
    build(2*n+1, mid+1, r);

    if(__lg(r - l + 1) & 1)  tr[n].first = tr[2*n].first | tr[2*n+1].first,   tr[n].second = 0;
    else                tr[n].first = tr[2*n].first ^ tr[2*n+1].first,   tr[n].second = 1;
}

void update(int n, int l, int r, int idx, int num){
    if(idx > r || idx < l) return;
    if(l == r){
        tr[n].first = num;
        return;
    }
    int mid = l + (r - l) / 2;
    update(2*n, l, mid, idx, num);
    update(2*n+1, mid+1, r, idx, num);
    
    if(__lg(r - l + 1) & 1)  tr[n].first = tr[2*n].first | tr[2*n+1].first,   tr[n].second = 0;
    else                tr[n].first = tr[2*n].first ^ tr[2*n+1].first,   tr[n].second = 1;
}

void solve(){

    int n, m;   cin >> n >> m;
    n = (1 << n);
    for(int i = 1; i <= n; i++)  cin >> v[i];
    build(1, 1, n);

    while(m--){
        int idx, num;   cin >> idx >> num;
        update(1, 1, n, idx, num);
        cout << tr[1].first << "\n";
    }
}

signed main(){
    fast;
    int t = 1;
    // cin >> t;
    while(t--){solve();}
    return 0;
}