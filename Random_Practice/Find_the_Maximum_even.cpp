#include<bits/stdc++.h>
using namespace std;

int main(){
    
    int n;  cin >> n;
    vector<int> v(n);
    for(int i = 0; i < n; i++){
        cin >> v[i];
    }

    sort(v.begin(), v.end());
    int ans = INT_MIN;
    for(int i = n-1; i >= 0; i--){
        if(v[i] % 2 == 0 ){
            ans = v[i];
            break;
        }
    }

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(i != j && (v[i] + v[j]) % 2 == 0)  ans = max(ans, v[i] + v[j]);
        }
    }

    cout << ans << endl;
    
    return 0;
}