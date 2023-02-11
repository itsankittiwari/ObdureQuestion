#include <stdio.h>
void check_value(char a){
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
int main()
{
    char a;
    scanf("%c", &a);
    check_value(a);
}