#include <stdio.h>
int main()
{
    // leap year or not
    int a;
    scanf("%d", &a);
    if (a % 4 == 0 || a % 400 == 0)
    {
        printf("leap year %d", a);
    }
    else if (a % 100 == 0)
    {
        printf("Not leap year %d", a);
    }
    else
    {
        printf("Not leap year %d", a);
    }
}