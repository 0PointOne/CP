#include<bits/stdc++.h>
#define int long long int
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;

void solve(){

    int n, k;   cin >> n >> k;

    priority_queue<int> q;
    for(int i = 0; i <= 30; i++){
        if(n & (1 << i))  q.push(i);
    }
    if(q.size() > k){
        cout << "NO\n";
        return;
    }

    while(q.size() < k && q.top() > 0){
        int val = q.top();
        q.pop();
        q.push(val - 1), q.push(val - 1);
    }

    if(q.size() != k) cout << "NO\n";
    else{
        cout << "YES\n";
        while(q.size()){
            int p = q.top();
            q.pop();
            cout << (1 << p) << " ";
        }cout << "\n";
    }

}

signed main(){
    fast;
    int t = 1;
    //cin >> t;
    while(t--){solve();}
    return 0;
}