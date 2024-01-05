#include <stdio.h>
int main ()
{
    char a;
    int b;
    scanf("%c",&a);
    b=(a>=65 && a<=90) ? 1:0;
    printf("%d",b);
    return 0;
}