#include <bits/stdc++.h>
using namespace std;

bool check(string pat, vector<int> z){
    for (int i = 0; i < z.size(); i++){
        if (z[i] == pat.size()) return true;
    }
    return false;
}

void createZArray(string concatenated, vector<int> &z){

    int left = 0;
    int right = 0;
    for(int i = 1; i < concatenated.size(); i++){
        if (i > right){
            left = right = i;
            while (right < concatenated.size() and concatenated[right] == concatenated[right - left])    right++;
            z[i] = right - left;
        }
        else if (z[i - left] < right - i + 1)    z[i] = z[i - left];
        
        else{
            left = i;
            while (right < concatenated.size() and concatenated[right - left] == concatenated[right])
                right++;
            z[right] = right - left;
            right--;
        }
    }
}
int main(){

    string pat, text;
    cin >> text >> pat;

    vector<int> z(text.size() + pat.size() + 1);
    string concatenated = pat + "#" + text;

    createZArray(concatenated, z);
    
    if(check(pat, z))  cout << "YES";
    else      cout << "NO";
}