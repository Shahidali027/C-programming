#include<stdio.h>
int main()
{
   int number;
   int choice,bit;
   
   printf("Enter the number\n");
   scanf("%d",&number);

   printf("Enter your choice for left shift bit or right shift bit\n");

   printf("1-To unset right most bit\n");
   printf("2-To unset left most bit\n");
   scanf("%d",&choice);

   if(choice==1)
   {
    printf("Enter the no. of bits you want to unset\n");
    scanf("%d",&bit);
    printf("After unsetting right most bit the number is %d",number>>bit);
   }
   
}