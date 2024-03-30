#define _CRT_SECURE_NO_WARNINGS

#include "helper.h"

int testFibonacci(int n, int expectedResult) {
    int result = fibonacci(n);
    if (result == expectedResult) {
        printf("Testing fibonacci with input %i passed!\n", n);
        return 0;
    } else {
        printf("Testing fibonacci with input %i FAILED! Expected %i but got %i instead!\n", n, expectedResult, result);
        return 1;
    }
}

int testFibonacciSum(int n, int expectedResult) {
    int result = fibonacciSum(n);
    if (result == expectedResult) {
        printf("Testing fibonacciSum with input %i passed!\n", n);
        return 0;
    } else {
        printf("Testing fibonacciSum with input %i FAILED! Expected %i but got %i instead!\n", n, expectedResult, result);
        return 1;
    }
}

int testGcd(int a, int b, int expectedResult) {
    int result = gcd(a, b);
    if (result == expectedResult) {
        printf("Testing gcd with inputs %i, %i passed!\n", a, b);
        return 0;
    } else {
        printf("Testing fibonacci with inputs %i, %i FAILED! Expected %i but got %i instead!\n", a, b, expectedResult, result);
        return 1;
    }
}

int main(void) {
    printf("\nTEST SUMMARY:\n======================\n");
}