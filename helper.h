#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

// Implementation of Fibonacci.
// First attempt was a recursive solution, which did NOT work, FWIW.
unsigned long long fibonacci(unsigned long long n) {
    if (n == (unsigned long long)0) {
        return 0;
    } else if (n == (unsigned long long)1) {
        return 1;
    }
    unsigned long long result = 1;
    unsigned long long resultBefore = 0;
    for (unsigned long long i = 2; i <= n; i++) {
        unsigned long long resultBeforeTemp = result;
        result = result + resultBefore;
        resultBefore = resultBeforeTemp;
    }
    return result;
}

// See Derivation.md for how this was derived
unsigned long long fibonacciSum(int n) {
    return fibonacci(n + 2) - (unsigned long long) 1;
}

// Implements the Euclidean algorithm
unsigned long long gcd(unsigned long long a, unsigned long long b) {
    // If same number, then stop.
    if (a == b) {
        return a;
    }
    // Assert that a >= b
    if (b > a) {
        unsigned long long temp = b;
        b = a;
        a = temp;
    }
    // Find Euclid's division lemma
    for (unsigned long long r = 0; r < b; r++) {
        unsigned long long q = (a - r) / b;
        if (q * b + r == a) {
            // q has been established successfully
            if (r == 0) {
                // Stop.
                return b;
            }
            return gcd(b, r);
        }
    }
    return -1;
}