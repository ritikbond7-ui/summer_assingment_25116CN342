#include <stdio.h>

int main() {
    int a[100], n, i, j, found = 0;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter array elements: ");
    for(i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    printf("Duplicate elements are:");

    for(i = 0; i < n; i++) {
        for(j = i + 1; j < n; j++) {
            if(a[i] == a[j]) {
                printf("%d", a[i]);
                found = 1;
                break;
            }
        }
    }

    if(!found)
        printf("No duplicates found");

    return 0;
}