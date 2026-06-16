#include <stdio.h>

int main() {
    int n, i, sum = 0, expected_sum, missing;
    int a[100];

    scanf("%d", &n);
    for(i = 0; i < n; i++) {
        scanf("%d", &a[i]);
        sum += a[i];
    }

    expected_sum = (n + 1) * (n + 2) / 2;
    missing = expected_sum - sum;

    printf("%d", missing);

    return 0;
}