#include <stdio.h>
int main()
{
    int number;
    printf("Enter the number to check given number is even or odd=\n");
    scanf("%d",&number);

    (number>=1 && number <=100)?printf("the number is between 1 and 100"):printf("the number is not between 1 and 100");
    return 0;
}