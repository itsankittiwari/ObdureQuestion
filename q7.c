// check alphabet
#include <stdio.h>
void check_alphabet(char a){
    if ((a >= 'a' && a <= 'z') || (a >= 'A' && a <= 'Z'))
    {
        printf("Value is alphabet ");
    }
    else
    {
        printf("Value is not alphabet ");
    }
} 
int main()
{
    
    char a;
    scanf("%c", &a);
    check_alphabet(a);
}