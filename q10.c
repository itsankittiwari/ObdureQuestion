#include <stdio.h>
int main()
{
    char a;
    scanf("%c", &a);
    if (a >= 'a' && a <= 'z')
    {
        printf("Value is in lowercase ");
    }
    else if (a >= 'A' && a <= 'Z')
    {
         printf("Value is in uppercase ");
    }
    else
    {
        printf("Value is Invalid ");
    }
}