#include <stdio.h>

int main() {
    int i, j, k;
    char ch;
    int n = 5;

    for(i = 1; i <= n; i++) {
        ch = 'A';
        for(j = 1; j <= n - i; j++) {
            printf(" ");
        }
        for(k = 1; k <= i; k++) {
            printf("%c", ch++);
        }
        ch--;
        for(k = 1; k < i; k++) {
            printf("%c", --ch);
        }
        printf("\n");
    }
    return 0;
}