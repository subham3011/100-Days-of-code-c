#include <stdio.h>

int main() {
    int num, original, reversed = 0, remainder;

    printf("Enter The number :");
    scanf("%d", &num);

    original = num; // store original number

    // Reverse the number
    while (num > 0) {
        remainder = num % 10;           // take last digit
        reversed = reversed * 10 + remainder; // build reversed number
        num = num / 10;                 // remove last digit
    }

    // Check if palindrome
    if (original == reversed) {
        printf("Palindrome");
    } else {
        printf("Not palindrome");
    }

    return 0;
}
