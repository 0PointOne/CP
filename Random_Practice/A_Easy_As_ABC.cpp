#include<bits/stdc++.h>
#define int long long int
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;

void solve(){

    vector<string> s(3);
    for(int i = 0; i < 3; i++) cin >> s[i];
    string mn = "CCC";

    for(int i1 = 0; i1 < 3; i1++){
        for(int j1 = 0; j1 < 3; j1++){
            for(int i2 = 0; i2 < 3; i2++){
                for(int j2 = 0; j2 < 3; j2++){
                    for(int i3 = 0; i3 < 3; i3++){
                        for(int j3 = 0; j3 < 3; j3++){

                            if((i1 != i2 || j1 != j2) && (abs(i1 - i2) < 2 && abs(j1-j2) < 2) 
                            && (i3 != i2 || j3 != j2) && (abs(i3-i2) < 2 && abs(j3-j2) <2) 
                            && (i1 != i3 || j1 != j3)){ 
                                string temp = "";
                                temp += s[i1][j1];
                                temp += s[i2][j2];
                                temp += s[i3][j3];
                                mn = min(mn,temp);
                            }
                        }
                    }
                }
            }
        }
    }
    cout << mn << "\n";
}

signed main(){
    fast;
    int t = 1;
    //cin >> t;
    while(t--){solve();}
    return 0;
}