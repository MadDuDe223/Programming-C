#include <stdio.h>
#include <string.h>

void reverse(char *str) {
    int l = 0, r = strlen(str) - 1;
    while (l < r) {
        char temp = str[l];
        str[l] = str[r];
        str[r] = temp;
        l++;
        r--;
    }
}

int main() {
    char str[100];
    printf("Enter a string: ");
    scanf("%s", str);
    reverse(str);
    printf("Reversed: %s\n", str);
    return 0;
}