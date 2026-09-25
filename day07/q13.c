#include<stdio.h>

int main(){
    int year;
    printf("Enter The Year :");
    scanf("%d",&year);

    if ((year % 400 == 0) || (year % 4 == 0 && year % 100 != 0))  {
        printf("%d is Leap year\n",year);
    } else {
        printf("%d Not a leap year\n",year);
    }

    return 0;
}
