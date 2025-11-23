// Write a recursive function named calculatePower that takes two integers base and exponent as input and returns the result of raising the base to the exponent.
#include <stdio.h> git add .
long long calculatePower(int base, int exponent) {
    if (exponent < 0) {
        printf("Negative exponents are not supported in this integer version.\n");
        return 0;
    }
    if (exponent == 0) {
        return 1; 
    }
    return base * calculatePower(base, exponent - 1); 

int main() {
    int base, exponent;

    printf("Enter base: ");
    scanf("%d", &base);

    printf("Enter exponent (non-negative integer): ");
    scanf("%d", &exponent);

    long long power = calculatePower(base, exponent);
    printf("%d raised to the power %d is: %lld\n", base, exponent, power);

    return 0;
}
