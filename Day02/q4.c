#include <stdio.h>

int main()
{
    int radius;
    float pi =3.14159;
    printf("Enter the radius of circle :");
    scanf("%d", &radius);
    float area=pi*radius*radius;
    printf("The area of circle is : %f \n",area );
    float Circumference=2*pi*radius;
    printf("The Circumference of  Circle is : %f \n",Circumference);
    return 0;
}
