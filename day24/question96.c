#include <stdio.h>
#include <string.h>

int main() {
    char str[100], result[100];
    int freq[256] = {0};
    int i, j = 0;

    scanf("%s", str);

    for (i = 0; str[i] != '\0'; i++) {
        if (freq[(unsigned char)str[i]] == 0) {
            result[j++] = str[i];
            freq[(unsigned char)str[i]] = 1;
        }
    }

    result[j] = '\0';
    printf("%s", result);

    return 0;
}