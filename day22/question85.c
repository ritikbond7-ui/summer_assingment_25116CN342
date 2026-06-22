#include <stdio.h>
#include <string.h>

int main() {
    char str[100], rev[100];
    int i, j, len, flag = 1;

    printf("Enter a string: ");
    
    // Use fgets instead of gets for safety
    if (fgets(str, sizeof(str), stdin)) {
        
        // Remove the newline character added by fgets
        str[strcspn(str, "\n")] = 0;
        
        len = strlen(str);

        // Logic to reverse the string
        for(i = 0, j = len - 1; i < len; i++, j--) {
            rev[i] = str[j];
        }
        rev[i] = '\0';

        // Check if palindrome
        for(i = 0; i < len; i++) {
            if(str[i] != rev[i]) {
                flag = 0;
                break;
            }
        }

        if(flag == 1) {
            printf("The string is a palindrome.\n");
        } else {
            printf("The string is not a palindrome.\n");
        }
    }
    
    return 0;
}