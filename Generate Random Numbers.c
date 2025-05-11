#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    srand(time(0));
    int n = 5, min = 10, max = 50;
    printf("Random numbers: ");
    for (int i = 0; i < n; i++)
        printf("%d ", rand() % (max - min + 1) + min);
    return 0;
}