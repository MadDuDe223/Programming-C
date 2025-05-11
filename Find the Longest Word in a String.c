#include <stdio.h>
#include <string.h>

void findLongestWord(char str[]) {
    char longest[100], current[100];
    int max_len = 0, current_len = 0;
    int i = 0, j = 0;
    
    while (str[i] != '\0') {
        if (str[i] == ' ') {
            current[current_len] = '\0';
            if (current_len > max_len) {
                max_len = current_len;
                strcpy(longest, current);
            }
            current_len = 0;
            j = 0;
        } else {
            current[j++] = str[i];
            current_len++;
        }
        i++;
    }
    
    // Check last word
    current[current_len] = '\0';
    if (current_len > max_len) {
        strcpy(longest, current);
    }
    
    printf("Longest word: %s\n", longest);
}

int main() {
    char str[100];
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0'; // Remove newline
    findLongestWord(str);
    return 0;
}