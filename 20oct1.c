#include<stdio.h>
int main()
{
    int a,b,c;
    printf("A:");
    scanf("%d",&a);
    printf("B:");
    scanf("%d",&b);
    printf("C:");
    scanf("%d",&c);

    if(a>b)
    {
        if(a>c)
        {
            printf("%d is the Largest Among all",a);
        }
        else
        {
            printf("%d is the Largest Among all",c);
        }
    }
    else
    {
        if(c>b)
        {
            printf("%d is the Largest Among all",c);
        }
        else
        {
            printf("%d is the Largest Among all",b);
        }
    }

    return 0;
}