#include<bits/stdc++.h>
#define int long long int
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;

const int N = 1e5+5;
int v[N], tr[4*N];

void build(int n, int l, int r){
    if(l == r){
        tr[n] = v[l];
        return; 
    }
    int mid = l + (r - l) / 2;
    build(2*n, l, mid);
    build(2*n+1, mid+1, r);
    tr[n] = tr[2*n] + tr[2*n+1];
}

void update(int n, int l, int r, int idx){
    if(idx > r || idx < l) return;
    if(l == r){
        tr[n] = 1;
        return;
    }
    int mid = l + (r - l) / 2;
    update(2*n, l, mid, idx);
    update(2*n+1, mid+1, r, idx);
    tr[n] = tr[2*n] + tr[2*n+1];
}

int cnt(int n, int l, int r, int a, int b){
    if(l > b || r < a) return 0;
    if(l >= a && r <= b) return tr[n];
    int mid = l + (r - l) / 2;
    return cnt(2*n, l, mid, a, b) + cnt(2*n+1, mid+1, r, a, b);
}

void solve(){

    int n, m;   cin >> n >> m;
    vector<pair<int,int> > qu(m);
    
    for(int i = 0; i < m; i++) cin >> qu[i].first >> qu[i].second;

    int op; cin >> op;
    vector<int> change(op);
    for(int i = 0; i < op; i++) cin >> change[i];

    auto isPos = [&](int num){
        build(1, 1, n);
        for(int i = 0; i <= num; i++)   update(1, 1, n, change[i]);

        for(int i = 0; i < m; i++){

            int one = cnt(1, 1, n, qu[i].first, qu[i].second);
            if(one > (qu[i].second - qu[i].first + 1 - one) )     return true;
        }
        return false;
    };

    int l = 0, r = op-1;
    int mid = l + (r - l) / 2;
    int ans = -1;
    while(l <= r){
        if(isPos(mid))   ans = mid, r = mid - 1;
        else             l = mid + 1;
        mid = l + (r - l) / 2;
    }

    cout << (ans >= 0  ? ans + 1 : ans) << "\n";
}

signed main(){
    fast;
    int t = 1;
    cin >> t;
    while(t--){solve();}
    return 0;
}