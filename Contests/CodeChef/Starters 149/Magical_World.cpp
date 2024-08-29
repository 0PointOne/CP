#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;  cin >> t;
	while(t--){
	    int a, b, c;    cin >> a >> b >> c;
	    int cnt = 0;
	    
	    if(a * b > c * c){
	        if(a > b) a = 1;
	        else      b = 1;
	        cnt++;
	    }
	    
	    if(a * b > c * c) cnt++;
	    
	    cout << cnt << "\n";
	    
	}

}