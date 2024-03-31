#define _CRT_SECURE_NO_WARNINGS

#include "helper.h"

int main(void) {
    int A = 0;
    int B = 0;
    // Inputs of A and B must be between [1, 92]. See Derivation for why this is.
    while (A <= 0 || A > 92) {
        printf("Enter an input for A: ");
        scanf("%d", &A);
        printf("\n");
    }
    A--; // See Derivation for why we subtract by 1.
    while (B <= 0 || B > 92) {
        printf("Enter an input for B: ");
        scanf("%d", &B);
        printf("\n");
    }
    B--; // See Derivation for why we subtract by 1.

    unsigned long long fibonacciA = fibonacci(A);
    unsigned long long fibonacciB = fibonacci(B);
    printf("The sum of the first %i and %i Fibonacci numbers are %llu and %llu, respectively.\n", A, B, fibonacciA, fibonacciB);
    printf("Now let's fine what gcd(%llu, %llu) is!\n", fibonacciA, fibonacciB);
    unsigned long long gcdResult = gcd(fibonacciA, fibonacciB);
    printf("Therefore, gcd(%llu, %llu) = %llu", fibonacciA, fibonacciB, gcdResult);
}