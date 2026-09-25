#include <stdio.h>


int hcf(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int main() {
    int a, b, h, lcm;

    
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    h = hcf(a, b);

    // LCM formula
    lcm = (a * b) / h;

    printf("%d\n", lcm);

    return 0;
}
