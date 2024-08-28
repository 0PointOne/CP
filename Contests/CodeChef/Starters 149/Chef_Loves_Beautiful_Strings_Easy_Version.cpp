#include<bits/stdc++.h>
#define int long long int
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;

void solve(){

    int n;  cin >> n;
    string s;   cin >> s;

    int ans = 0;
    priority_queue<int> pq;
    int cnt = 1;
    for(int i = 0; i < n-1; i++){
        if(s[i] == s[i+1]) cnt++;
        else{
            pq.push(cnt);
            cnt = 1;
        }
    }
    pq.push(cnt);

    while(pq.size() > 1){
        int k = pq.top();
        pq.pop();

        if(k > 1) pq.push(k-1);
        ans += pq.size()-1;
    }    
    cout << ans << "\n";
}

signed main(){
    fast;
    int t = 1;
    cin >> t;
    while(t--){solve();}
    return 0;
}