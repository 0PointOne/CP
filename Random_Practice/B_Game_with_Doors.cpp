#include<bits/stdc++.h>
#define int long long int
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;

void solve(){

    int al, ar, bl, br; cin >> al >> ar >> bl >> br;

    vector<int> a(ar-al+1), b(br-bl+1);
    iota(a.begin(), a.end(), al);
    iota(b.begin(), b.end(), bl);

    int cnt = 0;
    for(int i = 0; i < a.size(); i++){
        for(int j = 0; j < b.size(); j++){
            if(a[i] == b[j]) cnt++;
        }
    }
    if(cnt == 0) cout << 1 << "\n";
    else{
        cnt--;
        if(ar != br && ((ar >= bl && ar <= br) || (br >= al && br <= ar)))  cnt++;
        if(al != bl && ((bl >= al && bl <= ar) || (al >= bl && al <= br)))  cnt++;
        cout << cnt << "\n";
    }

}

signed main(){
    fast;
    int t = 1;
    cin >> t;
    while(t--){solve();}
    return 0;
}