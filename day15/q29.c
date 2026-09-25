#include <stdio.h>

int main() {
    int n, i;
    long long fact = 1;  // use long long for large results

    printf("enter the Number : ");
    scanf("%d", &n);

    // Factorial calculation
    for(i = 1; i <= n; i++) {
        fact = fact * i;
    }

    // Output result
    printf("%lld\n", fact);

    return 0;
}
