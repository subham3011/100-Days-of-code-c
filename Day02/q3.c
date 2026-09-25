#include<stdio.h>

int main() {
    int length,breadth,area ;
    printf("Enter the length of rectangle :");
    scanf("%d", &length);
    printf("Enter the breadth of rectangle :");
    scanf("%d", &breadth);
    area= length*breadth;
    printf("The Area of Rectangle is %d \n",area);
    int Perimeter=2*(length+breadth);
    printf("The Perimeter of Rectangle is : %d \n",Perimeter);

    return 0;
}
