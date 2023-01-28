#include <stdio.h>
int main()
{
    int a, b, c;
    scanf("%d%d%d", &a, &b, &c);
    int sum = a + b + c;
    if (sum == 180)
    {
       printf( "triangle is valid");
    }
    else
    {
       printf( "triangle is not valid");
    }
}