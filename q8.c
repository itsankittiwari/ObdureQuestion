// check is vowels or not
#include <stdio.h>
void check_vowel(char a)
{
    if (a == 'a' || a == 'e' || a == 'i' || a == 'o' || a == 'u' || a == 'A' || a == 'E' || a == 'I' || a == 'O' || a == 'U')
    {
        printf("vowel");
    }

    else
    {
        printf(" not vowel");
    }
}
int main()
{

    char a;
    scanf("%c", &a);
    check_vowel(a);
}