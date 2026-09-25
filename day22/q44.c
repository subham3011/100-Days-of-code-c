#include <stdio.h>

int main() {
    int n, i;
    float sum = 0.0;

    
    printf("Enter number of terms: ");
    scanf("%d", &n);

    // Calculate series sum
    for (i = 1; i <= n; i++) {
        int numerator = 2 * i - 1;   // 1, 3, 5, 7 ...
        int denominator = 2 * i;     // 2, 4, 6, 8 ...
        sum += (float)numerator / denominator;
    }

    printf("Approximate sum: %.1f\n", sum);

    return 0;
}
