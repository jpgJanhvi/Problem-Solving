#include <stdio.h>
void main()
{
    char ch;
    printf("enter a character");
    scanf("%c", &ch);
    switch (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' || ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U')
    {
    case 1:
        printf("vowels");
        break;
    default:
        printf("consonants");
        break;
    }
}