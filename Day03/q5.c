#include<stdio.h>

int main() {
    float celcius;
    printf("Enter degree  in celsius :");
    scanf("%f",&celcius);
    float farhrenheit=(celcius*9/5)+32;
    printf("celsius to Fahrenheit is : %f",farhrenheit);
    return 0;
}
