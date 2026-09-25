#include <stdio.h>

int main() {
    int num, sum = 0, digit;

    
    printf("Enter a number: ");
    scanf("%d", &num);

    int original = num; 

    // Calculate sum of digits
    while (num > 0) {
        digit = num % 10;    // get last digit
        sum += digit;        // add to sum
        num /= 10;           // remove last digit
    }

    printf("Sum of digits of %d is %d\n", original, sum);
    return 0;
}

