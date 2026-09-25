#include <stdio.h>

int main() {
    int n, i;
    long long product = 1; // use long long for large results

    printf("enter the value of n :");
    scanf("%d", &n);
    // Multiply even numbers from 1 to n
    for (i = 2; i <= n; i += 2) {
        product *= i;
    }

    printf("%lld\n", product);

    return 0;
}
