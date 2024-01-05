#include <stdio.h>
int main() 
{
    char character;
    
    // Input character
    printf("Enter a character: ");
    scanf(" %c", &character); 

    int asciiValue = (int)character;
    const char* result = (asciiValue % 2 == 0) ? "even" : "odd";

    // Output the result
    printf("The character '%c' has an ASCII value of %d, which is %s.\n", character, asciiValue, result);

    return 0;
}  