#include <stdio.h>

int main() {
    int num, i, sum = 0;

    
    printf("Enter a number: ");
    scanf("%d", &num);

    // Find divisors and calculate sum
    for (i = 1; i <= num / 2; i++) {
        if (num % i == 0) {
            sum += i;
        }
    }

    // Check if perfect number
    if (sum == num && num != 0) {
        printf("Perfect number\n");
    } else {
        printf("Not perfect number\n");
    }

    return 0;
}
