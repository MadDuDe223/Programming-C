#include <stdio.h>
#include <math.h>

int main() {
    double base, exponent;
    printf("Enter base and exponent: ");
    scanf("%lf %lf", &base, &exponent);
    printf("%.2f^%.2f = %.2f\n", base, exponent, pow(base, exponent));
    return 0;
}