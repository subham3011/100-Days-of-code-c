#include <stdio.h>

int main() {
    int n, sum;

    printf("Enter the no. :");
    scanf("%d", &n);

    // Using formula: sum = n * (n + 1) / 2
    sum = n * (n + 1) / 2;

    
    printf("Sum=%d\n", sum);

    return 0;
}
