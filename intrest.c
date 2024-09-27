#include <stdio.h>
#include <math.h>

int main() {
    double principal, rate, time, amount, compoundInterest;

    // Input principal amount, rate of interest, and time
    printf("Enter the principal amount (P): ");
    scanf("%lf", &principal);
    printf("Enter the rate of interest (r) in percentage: ");
    scanf("%lf", &rate);
    printf("Enter the time (t) in years: ");
    scanf("%lf", &time);

    // Calculate compound interest
    amount = principal * pow((1 + rate / 100), time);
    compoundInterest = amount - principal;

    // Display results
    printf("\nTotal amount after %.2f years: %.2f\n", time, amount);
    printf("Compound Interest: %.2f\n", compoundInterest);

    return 0;
}
