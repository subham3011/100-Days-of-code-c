#include <stdio.h>

int main() {
    int n, i, sum = 0;
    printf("Enter value of n: ");
    scanf("%d", &n);   

    int arr[n];

    // input elements
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        sum += arr[i]; // add directly while reading
    }

    // print sum
    printf("%d", sum);

    return 0;
}
