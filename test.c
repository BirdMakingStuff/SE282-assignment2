#define _CRT_SECURE_NO_WARNINGS

#include "helper.h"

int testFibonacci(unsigned long long n, unsigned long long expectedResult) {
    printf("Testing fibonacci(%llu):\n", n);
    unsigned long long result = fibonacci(n);
    if (result == expectedResult) {
        printf("Testing fibonacci with input %llu passed!\n", n);
        return 0;
    } else {
        printf("Testing fibonacci with input %llu FAILED! Expected %llu but got %llu instead!\n", n, expectedResult, result);
        return 1;
    }
}

int testFibonacciSum(int n, unsigned long long expectedResult) {
    printf("Testing fibonacciSum(%i):\n", n);
    unsigned long long result = fibonacciSum(n);
    if (result == expectedResult) {
        printf("Testing fibonacciSum with input %i passed!\n", n);
        return 0;
    } else {
        printf("Testing fibonacciSum with input %i FAILED! Expected %llu but got %llu instead!\n", n, expectedResult, result);
        return 1;
    }
}

int testGcd(unsigned long long a, unsigned long long b, unsigned long long expectedResult) {
    printf("Testing gcd(%llu, %llu):\n", a, b);
    unsigned long long result = gcd(a, b);
    if (result == expectedResult) {
        printf("Testing gcd with inputs %llu, %llu passed!\n", a, b);
        return 0;
    } else {
        printf("Testing fibonacci with inputs %llu, %llu FAILED! Expected %llu but got %llu instead!\n", a, b, expectedResult, result);
        return 1;
    }
}

int main(void) {
    printf("\nTEST SUMMARY:\n======================\n");
    testFibonacci(0, 0);
    testFibonacci(1, 1);
    testFibonacci(2, 1);
    testFibonacci(15, 610);
    testFibonacci(37, 24157817);
    testFibonacci(19, 4181);
    testFibonacci(30, 832040);
    testFibonacci(50, 12586269025);
    testFibonacci(26, 121393);
    testFibonacci(8, 21);
    testFibonacciSum(3, 4);
    testFibonacciSum(0, 0);
    testFibonacciSum(1, 1);
    testFibonacciSum(2, 2);
    testFibonacciSum(12, 376);
    testFibonacciSum(52, 86267571271);
    
    testGcd(1, 1, 1);
    testGcd(4, 2, 2);
    
    testGcd(3376, 40812, 4);
    testGcd(62261, 41355, 1);
    testGcd(123483, 95188, 1);
    testGcd(123483, 35958, 3);
    testGcd(895917916, 74398, 2);
    testGcd(806608185, 30, 15);

    testGcd(570560354, 3871624245, 1);
    testGcd(3530868474, 1174042843, 1);
}