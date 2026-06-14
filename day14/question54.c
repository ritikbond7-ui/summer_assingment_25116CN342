#include <stdio.h>

int main() {
    int a[100], n, key, i, count = 0;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter array elements: ");
    for(i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    printf("Enter element whose frequency is required: ");
    scanf("%d", &key);

    for(i = 0; i < n; i++) {
        if(a[i] == key) {
            count++;
        }
    }

    printf("Frequency of %d is %d", key, count);

    return 0;
}