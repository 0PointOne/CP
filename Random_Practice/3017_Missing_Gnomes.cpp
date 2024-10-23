#include<bits/stdc++.h>
#define int long long int
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;

void solve(){

    int n, q;   cin >> n >> q;
    vector<int> fre(n+1);
    vector<int> v(q);
    for(int i = 0; i < q; i++){
        cin >> v[i];
        fre[v[i]]++;
    }

    deque<int> qu;
    for(int i = 1; i <= n; i++){
        if(fre[i] == 0) qu.push_back(i);
    }
    

    for(int i = 0; i < q; i++){
        while(qu.size() && qu.front() < v[i]){
            cout << qu.front() << "\n";
            qu.pop_front();
        }
        cout << v[i] << "\n";
    }

    while(qu.size()){
        cout << qu.front() << "\n";
        qu.pop_front();
    }

}

signed main(){
    fast;
    int t = 1;
    //cin >> t;
    while(t--){solve();}
    return 0;
}