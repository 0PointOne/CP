#include<bits/stdc++.h>
using namespace std;

bool isPa(vector<int>& a){
    int i = 0, j = a.size()-1;
    while(i <= j){
        if(a[i++] != a[j--]) return false;
    }
    return true;
}

void solve(){
    int n;  cin >> n;
    vector<int>v(n);
    for(int i = 0; i < n; i++) cin >> v[i];
    
    int a = -1, b = -1;
    int i = 0, j = n-1; 
    while(i <= j){
        if(v[i] == v[j]) i++, j--;
        else{
            a = v[i];
            b = v[j];
            break;
        }
    }
    if(i >= j){
        cout << "YES" << "\n";
        return;
    }
    
    vector<int>x,y;
    for(int i = 0; i < n; i++){
        if(v[i] != a) x.push_back(v[i]);
        if(v[i] != b) y.push_back(v[i]);
    }
    
    if(isPa(x) || isPa(y)){
        cout << "YES" << "\n";
    }
    else cout << "NO" << "\n";
}

int main(){
    int t;  cin >> t;
    while(t--){
        solve();
    }
}