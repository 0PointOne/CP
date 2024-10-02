# Multiplicative Inverse Under Modulo

## Introduction
The **multiplicative inverse** of an integer `a` under modulo `m` is an integer `x` such that:

$$ a \cdot x \equiv 1 \, (\text{mod} \, m) $$

In other words, when you multiply `a` and `x` and take the remainder after dividing by `m`, you get 1.



## Conditions

- The multiplicative inverse exists if and only if `a` and `m` are coprime -> $$ \text{gcd}(a, m) = 1 $$

- If `m` is prime, the inverse can be found using **Fermat's Little Theorem**.



## Fermat's Little Theorem
Fermat's Little Theorem states that if `p` is a prime number and `a` is an integer not divisible by `p`, then:

$$ a^{(p-1)} \equiv 1 \, (\text{mod} \, p) $$

From this, we can derive that: 
$$ a^{(p-2)} \equiv a^{-1} \, (\text{mod} \, p) $$

This means $$ a^{(p-2)} $$ is the multiplicative inverse of `a` modulo `p`.



## C++ Code
```cpp
int power(int x, unsigned int y, int p) {
    int res = 1;
    x %= p; 

    while (y > 0) {
        if (y & 1) 
            res = (res * x) % p;
        y >>= 1;
        x = (x * x) % p;
    }
    return res;
}

int modInverse(int a, int m) {
    return power(a, m - 2, m);
}

void solve() {
    int a = 3, m = 11;
    int inv = modInverse(a, m);
    std::cout << "Multiplicative Inverse of " << a << " under modulo " << m << " is: " << inv << "\n";
}
```

## Example

Let's say we want to find the multiplicative inverse of `3` modulo `11`:

1. **Input**: `a = 3`, `m = 11`
2. Using Fermat's Little Theorem:
   Inverse = $$ (3^{11-2} \mod 11) = 3^9 \mod 11 $$
   
   **The output will be:**
   Multiplicative Inverse of 3 under modulo 11 is: 4



## Conclusion

- The multiplicative inverse under modulo exists if `a` and `m` are coprime.
- For a prime `m`, use Fermat's Little Theorem to compute the inverse.