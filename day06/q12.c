#include <stdio.h>

int main() {
    int n;

    printf("Enter a integer :");
    scanf("%d", &n);

    // Nested if–else to check
    if (n >= 0) {
        if (n == 0)
            printf("Zero\n");
        else
            printf("Positive\n");
    } else {
        printf("Negative\n");
    }

    return 0;
}
