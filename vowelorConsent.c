#include <stdio.h>

int main() 
{
    char character;
    
    printf("Enter the char you want to check for vowel and consonant:\n ");
    scanf(" %c", &character);

    int isVowel = (character == 'a' || character == 'e' || character  == 'i' || character  == 'o' || character  == 'u' ||
                   character  == 'A' || character  == 'E' || character  == 'I' || character  == 'O' || character  == 'U');

    if (isVowel) 
        {
        printf("%c is a vowel.\n",character);
        }
        else
        {
        printf("%c is a consonant.\n",character);
        }

    return 0;
}
