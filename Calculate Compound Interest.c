#include <stdio.h>
#include <math.h>

int main() {
    double principal, rate, time, compoundInterest;
    int n;
    printf("Enter principal amount: ");
    scanf("%lf", &principal);
    printf("Enter annual interest rate (in %%): ");
    scanf("%lf", &rate);
    printf("Enter time in years: ");
    scanf("%lf", &time);
    printf("Enter number of times interest is compounded per year: ");
    scanf("%d", &n);
    
    rate = rate / 100;
    compoundInterest = principal * pow(1 + rate/n, n*time) - principal;
    
    printf("Compound Interest: %.2lf\n", compoundInterest);
    return 0;
}