#include <iostream>
#include <queue>
using namespace std;

int main(){
    
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int q;  cin >> q;
    priority_queue <int, vector<int>, greater<int>> pq;
    while(q--){
        int op; cin >> op;
        if(op == 1){
            int a;  cin >> a;
            pq.push(a);
        }
        else{
            if(pq.empty()){
                cout << "empty" << '\n';
            }
            else{
                int fr = pq.top();
                cout << fr << '\n';
                while(!pq.empty() && pq.top() == fr )   pq.pop();
            }
        }
    }
    
    return 0;
}