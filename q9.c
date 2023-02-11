#include <stdio.h>
void check_value(char a)
{
    if ((a >= 'a' && a <= 'z') || (a >= 'A' && a <= 'Z'))
    {
        printf("Value is alphabet ");
    }
    else if (a >= '0' && a <= '9')
    {
        printf("Value is Integer ");
    }
    else
    {
        printf("Value is Invalid ");
    }
}
int main()
{
    char a;
    scanf("%c", &a);
    check_value(a);
}