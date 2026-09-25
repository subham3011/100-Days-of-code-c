#include <stdio.h>

int main() {
    int a, b, c;

    // Input three sides of the triangle
    printf("Enter a first side(a) :");
    scanf("%f", &a);
    printf("Enter a second side(b) :");
    scanf("%f", &b);
    printf("Enter a third side(c) :");
    scanf("%f", &c);
    

    if (a == b && b == c) {
        printf("Equilateral\n");
    }
    else if (a == b || b == c || a == c) {
        printf("Isosceles\n");
    }
    else {
        printf("Scalene\n");
    }

    return 0;
}
