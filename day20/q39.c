#include <stdio.h>

int main() {
    int num, digit, product = 1, hasOdd = 0;
    printf("Enter a number: ");
    scanf("%d", &num);

    int temp = num;
    if (temp == 0) // handle special case for input 0
        product = 1;
    else {
        while (temp != 0) {
            digit = temp % 10;
            if (digit % 2 == 1) {
                product *= digit;
                hasOdd = 1;
            }
            temp /= 10;
        }
    }
    if (!hasOdd)
        product = 1;
    printf("Product of odd digits: %d\n", product);
    return 0;
}
