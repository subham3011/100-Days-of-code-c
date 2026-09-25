#include <stdio.h>
#include <math.h>

int main() {
    float a, b, c, discriminant, root1, root2, realPart, imagPart;

    // Input coefficients
    printf("Enter a first coefficient(a) :");
    scanf("%f", &a);
    printf("Enter a first coefficient(b) :");
    scanf("%f", &b);
    printf("Enter a first coefficient(c) :");
    scanf("%f", &c);
    

    discriminant = b*b - 4*a*c;

    if (discriminant > 0) {
        // Two real and distinct roots
        root1 = (-b + sqrt(discriminant)) / (2*a);
        root2 = (-b - sqrt(discriminant)) / (2*a);
        printf("Roots are real and different: %.0f, %.0f\n", root1, root2);
    }
    else if (discriminant == 0) {
        // Two real and equal roots
        root1 = -b / (2*a);
        printf("Roots are real and same: %.0f\n", root1);
 }
    else {
        // Complex roots
        realPart = -b / (2*a);
        imagPart = sqrt(-discriminant) / (2*a);
        printf("Roots are complex\n");
    }

    return 0;
}
