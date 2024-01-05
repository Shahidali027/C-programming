// #include<stdio.h>
// int main()
// {
//     int a;
//     printf("Enter a number to check: ");
//     scanf("%d",&a);

//     if(a/2*2==a)
//     {
//         printf("Even\n");
//     }
//     else
//     {
//         printf("Odd\n");
//     }
//     printf("End of the program");
//     return 0;
// }

#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter if you are sports person or not:\n ");
    printf("1 For Yes\n 2 For No\n");
    scanf("%d",&a);

    if(a==1)
    {
        printf("Choose the options\n1.National level\n2.State level\n3.District level\n");
        scanf("%d",&b);
        {
            if(b==1)
            {
                printf("You are eligible for 50Percent Scholarship");
            }
            if(b==2)
            {
                printf("You are eligible for 40Percent Scholarship");
            }
            if(b==3)
            {
                printf("You are eligible for 30Percent Scholarship");
            }
        }
    } 
    else
    {
        printf("You are not eligible for Scholarship");
    }
    return 0;
}