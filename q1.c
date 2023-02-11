#include <stdio.h>
int maxium_num(int a, int b)
{
    if (a > b)
    {

        return a;
    }
    else
    {

        return b;
    }
}
int main()
{
    // maxium of two number
    int a, b;
    scanf("%d%d", &a, &b);
    int max = maxium_num(a, b);
    printf("maxium number is :%d", max);
}