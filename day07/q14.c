#include <stdio.h>

int main() {
    char ch;
    printf("Enter a character: ");
    scanf("%c", &ch);

    // Convert to lowercase if uppercase is entered
    if (ch >= 'A' && ch <= 'Z') {
        ch = ch + 32;  // ASCII conversion (A=65, a=97 → difference = 32)
    } else {
        printf("Its not a Alphabel,Wrong Input");
        return 0;
    }

    // Check vowel
    if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
        printf("Vowel\n");
    } else {
        printf("Consonant\n");
    }

    return 0;
}
