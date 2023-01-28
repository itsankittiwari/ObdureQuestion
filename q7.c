#include <stdio.h>
int main()
{
    // check alphabet
    char a;
    scanf("%c", &a);
    if ((a >= 'a' && a <= 'z') || (a >= 'A' && a <= 'Z'))
    {
        printf("Value is alphabet ");
    }
    else
    {
        printf("Value is not alphabet ");
    }
}