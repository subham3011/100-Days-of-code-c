#include<stdio.h>
#include<math.h>

int main(){
    float principal ,rate ,year;
    printf("enter the principal :");
    scanf("%f", &principal );
    printf("enter the rate :");
    scanf("%f", &rate );
    printf("enter the year :");
    scanf("%f", &year );
    float SimpleInterest = (principal*rate*year)/100;
    printf("the simple interest is : %f \n",SimpleInterest);
    float CI;
    CI = principal * (pow((1 + rate / 100.0), year) - 1);
    printf("the compound interest is : %f \n",CI);



    return 0;
}
