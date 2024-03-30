#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

// See Derivation.md for how this was derived
int fibonacciSum(int n) {
    return fibonacci(n + 2) - 1;
}

// Implementation of Fibonacci
int fibonacci(int n) {
    if (n == 0) {
        return 0;
    } else if (n == 1) {
        return 1;
    }
    return fibonacci(n - 1) + fibonacci(n - 2);
}

// Implements the Euclidean algorithm
int gcd(int a, int b) {
    // If same number, then stop.
    if (a == b) {
        return a;
    }
    // Assert that a >= b
    if (b > a) {
        int temp = b;
        b = a;
        a = temp;
    }
    // Find Euclid's division lemma
    for (int r = 0; r < b; r++) {
        int q = (a - r) / b;
        if (q * b + r == a) {
            // q has been established successfully
            if (r == 0) {
                // Stop.
                return b;
            }
            return gcd(b, r);
        }
    }
}