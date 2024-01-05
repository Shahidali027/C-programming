#include <stdio.h>
int main()
{
    char character;

    printf("Enter the Character\n");
    scanf("%c",&character);

    (character%2==0)?printf("Ascii value is even"):printf("ascii value is odd");

    return 0;
}
