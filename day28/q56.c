#include <stdio.h>

int main() {
    int n, i;
    printf("Enter value of n: ");
    scanf("%d", &n);   // read size of array

    int arr[n];        // declare array of size n

    // input elements
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // output elements
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
