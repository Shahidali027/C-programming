//program to add two numbers
//Header file
#include <stdio.h>
int main()
{
   double a,b,sum;
    
    printf("Enter the value of a:");
    scanf("%lf",&a);

    printf("Enter the value of b:");
    scanf("%lf",&b);
    
    sum = a+b;
    printf("sum:%.2lf",sum);

     return 0;
}