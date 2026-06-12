#include <stdio.h>

int main() {
    int n, temp, rev = 0, rem;
    scanf("%d", &n);
    temp = n;

    while (temp != 0) {
        rem = temp % 10;
        rev = rev * 10 + rem;
        temp = temp / 10;
    }

    if (n == rev)
        printf("Palindrome number");
    else
        printf("Not a palindrome number");

    return 0;
}