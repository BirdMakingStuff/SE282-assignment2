#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

// Implementation of Fibonacci.
// First attempt was a recursive solution, which did NOT work, FWIW.
unsigned long long fibonacci(int n) {
    if (n == 0) {
        return 0;
    } else if (n == 1) {
        return 1;
    }
    unsigned long long result = 1;
    unsigned long long resultBefore = 0;
    for (int i = 2; i <= n; i++) {
        unsigned long long resultBeforeTemp = result;
        result = result + resultBefore;
        resultBefore = resultBeforeTemp;
    }
    return result;
}

// See Derivations.md for how this was derived
unsigned long long fibonacciSum(int n) {
    return fibonacci(n + 2) - (unsigned long long) 1;
}

// Implements the Euclidean algorithm
unsigned long long gcd(unsigned long long a, unsigned long long b) {
    printf("\nInput of gcd(%llu, %llu)\n", a, b);
    printf("STEP 1: If %llu = %llu then output %llu as gcd(%llu, %llu) and stop.\n", a, b, a, a, b);
    // If same number, then stop.
    if (a == b) {
        return a;
    }
    printf("STEP 2: If %llu > %llu then initialise a = %llu and b = %llu. Otherwise initialise a = %llu and b = %llu.\n", a, b, a, b, b, a);
    // Assert that a >= b
    if (b > a) {
        unsigned long long temp = b;
        b = a;
        a = temp;
    }
    printf("STEP 3: Apply Euclid's division lemma to %llu and %llu by finding q, r such that %llu = q * %llu + r, where 0 <= r < %llu\n", a, b, a, b, b);
    // Find Euclid's division lemma
    for (unsigned long long r = 0; r < b; r++) {
        unsigned long long q = (a - r) / b;
        if (q * b + r == a) {
            printf("We have found the relationship %llu = %llu * %llu + %llu. \n", a, q, b, r);
            // q has been established successfully
            if (r == 0) {
                // Stop.
                printf("Remainder is 0 therefore the output to gcd(%llu, %llu) is %llu.\n", a, b, b);
                return b;
            }
            printf("Use the fact that gcd(%llu, %llu) = gcd(%llu, %llu) to continue finding the solution.\n", a, b, b, r);
            return gcd(b, r);
        }
    }
    return -1;
}