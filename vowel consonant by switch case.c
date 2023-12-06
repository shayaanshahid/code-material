#include <stdio.h>
void main()
{
    char character;
    printf("enter the character :");
    scanf("%c",&character);
    switch(character)
{
case 'a':
case 'e':
case 'i':
case 'o':
case 'u':
case 'A':
case 'E':
case 'I':
case 'O':
case 'U':
    printf("vowel");
    break;
    default:
    printf("consonant");
}
}
