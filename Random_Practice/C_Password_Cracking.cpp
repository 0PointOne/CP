#include<bits/stdc++.h>
#define int long long int
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;

void solve(){

    int n;  cin >> n;
    string s = "";

    bool left_not = true;
    for(int i = 0; i < 2 * n; i++){

        string temp ="";
        if(left_not){
            temp += "0";
            string k(s.begin(), s.end());
            temp += k;
        }
        else{
            string k(s.begin(), s.end());
            temp += k;
            temp += '0';
        }

        cout << "? " << temp << "\n";
        cout.flush();

        int com;    cin >> com;
        if(com == 1){
            s = temp;
            if(s.size() == n) break;
        }
        else{

            if(i == 0){
                string ans(n, '1');
                cout << "! " << ans << "\n";
                return;
            }

            (left_not  ?  temp[0] = '1' : temp[temp.size()-1] = '1');

            cout << "? " << temp << "\n";
            cout.flush();

            int com;    cin >> com;
            if(com == 0){
                left_not = false;
            }
            else{
                s = temp;
                if(s.size() == n) break;
            }
            i++;
        }
    }

    cout << "! " << s << "\n";
    cout.flush();

}

signed main(){
    fast;
    int t = 1;
    cin >> t;
    while(t--){solve();}
    return 0;
}