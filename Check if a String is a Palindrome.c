#include <stdio.h>
#include <string.h>
#include <stdbool.h>

bool isPalindrome(char *str) {
    int l = 0, r = strlen(str) - 1;
    while (l < r) {
        if (str[l++] != str[r--]) return false;
    }
    return true;
}

int main() {
    char str[] = "madam";
    printf(isPalindrome(str) ? "Palindrome\n" : "Not Palindrome\n");
    return 0;
}