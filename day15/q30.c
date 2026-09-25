#include <stdio.h>

int main() {
    int n, reverse = 0, last;

    printf("Enter The Number :");
    scanf("%d", &n);

    // Reverse calculation
    while (n != 0) {
        last = n % 10;        // get last digit
        reverse = reverse * 10 + last; // build reversed number
        n = n / 10;          // remove last digit
    }

    // Output result
    printf("%d\n", reverse);

    return 0;
}
