#include<bits/stdc++.h>
#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
using namespace std;

void solve(){

    int n;      cin >> n;
    long long pro = 1;

    vector<int> v(n);
    int mn = 10, in = 0;

    for(int i = 0; i < n; i++){
        cin >> v[i];
        if(v[i] < mn){
            mn = v[i];
            in = i;
        }
    }

    for(int i = 0; i < n; i++){
        if(i == in){
            v[i]++;
        }
        pro *= v[i];
    }
    cout << pro << endl;
    
}

int main(){
    fast_io;
    int test = 1;
    cin >> test;
    while(test--){
        solve();
    }
    return 0;
}