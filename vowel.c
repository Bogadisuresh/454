#include <stdio.h>
void main() 
{

    char ch;
    printf(" enter the chracter");
    scanf(" %c",&ch);
    switch(ch)
    {
    case'a':
    case'e':
    case'i':
    case'o':
   case'u':printf("%c is a vowel",ch);
    break;
    default:printf(" %c is a consonant",ch);
    break;
    }  
}
