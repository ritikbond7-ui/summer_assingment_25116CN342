#include <stdio.h>
#include <string.h>

int main() {
    char str[200];
    int count = 0, i;

    printf("Enter a sentence: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = 0; // Remove newline

    for (i = 0; str[i] != '\0'; i++) {
        // Count a word if it's not a space and it's the start of the string or preceded by a space
        if (str[i] != ' ' && (i == 0 || str[i-1] == ' ')) {
            count++;
        }
    }

    printf("Word count: %d\n", count);
    return 0;
}