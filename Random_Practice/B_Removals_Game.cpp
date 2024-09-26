#include<bits/stdc++.h>
#define int long long int
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;

void print(deque<int> a, deque<int> b){

}
void solve(){

    int n;  cin >> n;
    deque<int> a, b;
    for(int i = 0; i < n; i++){
        int x;  cin >> x;
        a.push_back(x);
    }
    for(int i = 0; i < n; i++){
        int x;  cin >> x;
        b.push_back(x);
    }

    while(a.size() > 1){
        if((a.front() == b.front() || a.front() == b.back())  &&  (a.back() == b.front() || a.back() == b.back())){
            if(a.front() == b.front()) a.pop_front(), b.pop_front();
            else if(a.front() == b.back()) a.pop_front(), b.pop_back();
        }
        else{
            cout << "Alice\n";
            return;
        }
    }
    cout << "Bob\n";

}

signed main(){
    fast;
    int t = 1;
    cin >> t;
    while(t--){solve();}
    return 0;
}