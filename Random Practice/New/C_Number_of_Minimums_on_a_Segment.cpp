#include<bits/stdc++.h>
#define int long long int
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;

const int N = 1e5 + 5;
int v[N], tr[4 * N];

void build(int n, int l, int r){
    if(l == r){
        tr[n] = v[l];
        return;
    }
    int mid = l + (r - l) / 2;
    build(2*n, l, mid);
    build(2*n+1, mid+1, r);
    tr[n] = min(tr[2*n], tr[2*n+1]);
}

void update(int n, int l, int r, int idx, int num){
    if(idx < l || idx > r) return;
    if(l == r){
        tr[n] = num;
        return;
    }
    int mid = l + (r - l) / 2;
    update(2*n, l, mid, idx, num);
    update(2*n+1, mid+1, r, idx, num);
    tr[n] = min(tr[2*n], tr[2*n+1]);
}

int mini(int n, int l, int r, int a, int b){
    if(l >= a && r <= b) return tr[n];
    if(l > b || r < a) return INT_MAX;

    int mid = l + (r - l) / 2;
    return min(mini(2*n, l, mid, a, b), mini(2*n+1, mid+1, r, a, b));
}

int number(int n, int l, int r, int a, int b, int mn){
    if(l == r){
        if(tr[n] == mn) return 1;
        else            return 0;
    }
    if(l > b || r < a) return 0;

    int mid = l + (r - l) / 2;
    return number(2*n, l, mid, a, b, mn) + number(2*n+1, mid+1, r, a, b, mn); 
}

void solve(){

    int n, m;   cin >> n >> m;
    for(int i = 1; i <= n; i++) cin >> v[i];
    build(1, 1, n);

    while(m--){
        int op; cin >> op;
        if(op == 2){
            int l, r;   cin >> l >> r;
            int mn = mini(1, 1, n, l+1, r);
            cout << mn << " ";
            cout << number(1, 1, n, l+1, r, mn) << "\n";

        }
        else{
            int idx, num;   cin >> idx >> num;
            update(1, 1, n, idx+1, num);
        }
    }

}

signed main(){
    fast;
    int t = 1;
    // cin >> t;
    while(t--){solve();}
    return 0;
}