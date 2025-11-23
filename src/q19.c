//  Write a function named calculateFactorialSeries that takes an integer n as input and prints the factorial series up to n.
#include <stdio.h>
void calculateFactorialSeries(int n) {
    if (n < 0) {
        printf("Factorial is not defined for negative numbers.\n");
        return;
    }
    unsigned long long fact = 1;
    printf("Factorial series up to %d:\n", n);

    for (int i = 0; i <= n; i++) {
        if (i == 0) {
            fact = 1; // 0! = 1
        } else {
            fact *= i;
        }
        printf("%d! = %llu\n", i, fact);
    }
}
int main() {
    int n;
    printf("Enter a non-negative integer: ");
    scanf("%d", &n);
    calculateFactorialSeries(n);
    return 0;
}
