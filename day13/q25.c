#include <stdio.h>

int main() {
    int a, b;
    char op;

    
    printf("enter first no.");
    scanf("%d",&a);
    printf("enter the operator \n");
    scanf(" %c", &op);
    printf("enter second no.");
    scanf("%d",&b);
    
  
    

    switch (op) {
        case '+':
            printf("%d\n", a + b);
            break;
        case '-':
            printf("%d\n", a - b);
            break;
        case '*':
            printf("%d\n", a * b);
            break;
        case '/':
            if (b != 0)
                printf("%d\n", a / b);
            else
printf("Error: Division by zero\n");
            break;
        case '%':
            if (b != 0)
                printf("%d\n", a % b);
            else
                printf("Error: Modulo by zero\n");
            break;
        default:
            printf("Invalid operator\n");
    }

    return 0;
}
