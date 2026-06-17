#include <stdio.h>

int main() {
    int a[100], b[100], c[200];
    int n1, n2, i, j = 0, k, found;

    printf("Enter size of first array: ");
    scanf("%d", &n1);

    printf("Enter elements of first array:");
    for(i = 0; i < n1; i++) scanf("%d", &a[i]);

    printf("Enter size of second array: ");
    scanf("%d", &n2);

    printf("Enter elements of second array:");
    for(i = 0; i < n2; i++) scanf("%d", &b[i]);

    for(i = 0; i < n1; i++) c[j++] = a[i];

    for(i = 0; i < n2; i++) {
        found = 0;
        for(k = 0; k < n1; k++) {
            if(b[i] == a[k]) {
                found = 1;
                break;
            }
        }
        if(!found) c[j++] = b[i];
    }

    printf("Union of arrays:");
    for(i = 0; i < j; i++) printf("%d ", c[i]);

    return 0;
}