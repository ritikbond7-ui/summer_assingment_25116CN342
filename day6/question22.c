#include <stdio.h>
#include <math.h>
// This program converts a binary number to decimal.
int main() {
    long long binary;
    int digit, decimal = 0, base = 1;

    printf("Enter a binary number: ");
    scanf("%lld", &binary);

    while (binary > 0) {
        digit = binary % 10;
        decimal = decimal + digit * base;
        base = base * 2;
        binary = binary / 10;
    }

    printf("Decimal = %d", decimal);

    return 0;
}