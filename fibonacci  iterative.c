/**
 * @file fibonacci_iterative.c
 * @brief C program to generate Fibonacci series using an iterative approach.
 */

#include <stdio.h>

int main() {
    int n, i;
    long long t1 = 0, t2 = 1, nextTerm;

    printf("--- Fibonacci Series (Iterative Method) ---\n");
    printf("Enter the number of terms: ");
    
    if (scanf("%d", &n) != 1 || n <= 0) {
        printf("Error: Please enter a valid positive integer.\n");
        return 1;
    }

    printf("Fibonacci Series: ");

    for (i = 1; i <= n; ++i) {
        printf("%lld ", t1);
        nextTerm = t1 + t2;
        t1 = t2;
        t2 = nextTerm;
    }
    
    printf("\n");
    return 0;
}
