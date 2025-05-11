#include <stdio.h>
#include <ctype.h>

int countVowels(char *str) {
    int count = 0;
    for (int i = 0; str[i]; i++) {
        char c = tolower(str[i]);
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') count++;
    }
    return count;
}

int main() {
    char str[] = "Hello World";
    printf("Vowel count: %d\n", countVowels(str));
    return 0;
}