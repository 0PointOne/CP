# Multiplicative Inverse Under Modulo

## Introduction

The **multiplicative inverse** of an integer `a` under modulo `m` is an integer `x` such that:

#### a * x ≡ 1 (mod m)

In other words, when you multiply `a` and `x` and take the remainder after dividing by `m`, you get 1.



## Conditions:

1. The multiplicative inverse exists if and only if `a` and `m` are coprime (i.e., `gcd(a, m) = 1`).
2. If `m` is prime, the inverse can be found using **Fermat's Little Theorem**.



## Fermat's Little Theorem

Fermat's Little Theorem states that if `p` is a prime number and `a` is an integer not divisible by `p`, then:

#### a^(p-1) ≡ 1 (mod p)

From this, we can derive that: 
#### a^(p-2) ≡ a^(-1) (mod p)

This means `a^(p-2)` is the multiplicative inverse of `a` modulo `p`.




## C++ Code

Here’s a simple C++ implementation to find the multiplicative inverse using Fermat's Little Theorem:

```cpp
#include <iostream>
using namespace std;

// Function to perform modular exponentiation
long long power(long long x, unsigned long long y, long long p) {
    long long res = 1; // Initialize result
    x = x % p; // Update x if it is more than or equal to p
    while (y > 0) {
        // If y is odd, multiply x with result
        if (y & 1)
            res = (res * x) % p;
        // y must be even now
        y = y >> 1; // y = y/2
        x = (x * x) % p; // Change x to x^2
    }
    return res;
}

// Function to find modular inverse
long long modInverse(long long a, long long m) {
    return power(a, m - 2, m);
}

int main() {
    long long a = 3; // Number to find the inverse of
    long long m = 11; // Modulo

    long long inv = modInverse(a, m);
    cout << "Multiplicative Inverse of " << a << " under modulo " << m << " is: " << inv << endl;

    return 0;
}
```

## Example

Let's say we want to find the multiplicative inverse of \( 3 \) modulo \( 11 \):

1. **Input**: a = 3, m = 11
2. Using Fermat's Little Theorem:
**Inverse = (3^(11-2) % 11 = 3^9) % 11 [Multiplicative Inverse of 3 under modulo 11 is: 4]**
   


## Summary

- The multiplicative inverse under modulo exists if `a` and `m` are coprime.
- For a prime `m`, use Fermat's Little Theorem to compute the inverse.