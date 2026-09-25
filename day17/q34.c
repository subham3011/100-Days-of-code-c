#include<stdio.h>

int main(){
    int num;
    printf("Enter a Number : ");
    scanf("%d",&num);
    if (num<1)
    {
        printf("%d is not a Prime No.",num);
        return 0;
    }
    int flag=0;

    for (int i = num; i ; i--)
    { 
        if (num % i == 0)
        {
            flag=flag+1;
        }
        
    }
    if (flag==2)
    {
 printf("%d is  a Prime Number",num);
    }
    else{
        printf("%d is not a Prime Number",num);
    }
    

    
    return 0;
}
