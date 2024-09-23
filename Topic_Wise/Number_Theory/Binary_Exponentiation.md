### Binary Exponentiation:

To abode precision error we are using binary exponentiation;

#### Code:
```cp
int power(int a, int b){
    
    int ans = 1;
    while(b){
        if(b & 1)  ans = (ans * a) % MOD;
        a = (a * a) % MOD;
        b >>= 1;
    }
    return ans;
}
```
#### Time Complexity: O(log(b));