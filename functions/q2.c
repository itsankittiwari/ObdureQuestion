// Write a C program to find maximum between three numbers.
#include <stdio.h>
int maxium_num(int a, int b, int c)
{
    if (a > b && a > c)
    {
        return a;
    }
    else if (b > a && b > c)
    {
        return b;
    }
    else
    {
        return c;
    }
}
int main()
{
    int a, b, c;
    scanf("%d%d%d", &a, &b, &c);
    int max = maxium_num(a, b, c);
    printf("maxium number is :%d", max);
}