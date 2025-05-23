#include <stdio.h>
#include <stdbool.h>

bool isPrime(int n) {
    if (n <= 1) return false;
    for (int i = 2; i * i <= n; i++)
        if (n % i == 0) return false;
    return true;
}

int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    printf(isPrime(n) ? "Prime\n" : "Not Prime\n");
    return 0;
}