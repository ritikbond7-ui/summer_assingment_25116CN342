#include <stdio.h>

int main() {
    int n, i, j, count, maxCount = 0, maxElement;
    int a[100];

    scanf("%d", &n);
    for(i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    for(i = 0; i < n; i++) {
        count = 1;
        for(j = i + 1; j < n; j++) {
            if(a[i] == a[j]) {
                count++;
            }
        }
        if(count > maxCount) {
            maxCount = count;
            maxElement = a[i];
        }
    }

    printf("%d", maxElement);

    return 0;
}