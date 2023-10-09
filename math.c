//program for Arthematic operations
//Header file
#include<stdio.h>
int main()
{
    int a,b;
    //output statement
    printf("Enter the value of a:");
    //input statement
    scanf("%d",&a);
    //output statement
    printf("Enter the value of b:");
    //input statement
    scanf("%d",&b);
    
    int c=a+b;
    int d=c-b;
    int e=d*c;
    int f=e/d;
   //output statement
    printf("\nAddition of:%d",c);
    printf("\nDifference of:%d",d);
    printf("\nMultiplication of:%d",e);
    printf("\nDivision of:%d",f);

    return 0;
}