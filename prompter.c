#define _CRT_SECURE_NO_WARNINGS

#include "helper.h"

int main(void) {
    int A = 0;
    int B = 0;
    // Inputs of A and B must be between [1, 92]. See Derivations.md for why this is.
    while (A <= 0 || A > 93) {
        printf("Enter an input for A: ");
        scanf("%d", &A);
    }
    while (B <= 0 || B > 92) {
        printf("Enter an input for B: ");
        scanf("%d", &B);
    }

    // See Derivations.md for why we subtract by 1.
    unsigned long long sumFibonacciA = fibonacciSum(A - 1);
    unsigned long long sumFibonacciB = fibonacciSum(B - 1);
    printf("The sum of the first %i and %i Fibonacci numbers are %llu and %llu, respectively.\n", A, B, sumFibonacciA, sumFibonacciB);
    printf("Now let's fine what gcd(%llu, %llu) is!\n", sumFibonacciA, sumFibonacciB);
    unsigned long long gcdResult = gcd(sumFibonacciA, sumFibonacciB);
    printf("Therefore, gcd(%llu, %llu) = %llu", sumFibonacciA, sumFibonacciB, gcdResult);
}