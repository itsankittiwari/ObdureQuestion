// Write a C program to check whether a number is negative, positive or zero.
#include <stdio.h>
int check_num(int a)
{
    if (a < 0)
    {
        printf("number is negative ");
        return a;
    }
    else if (a > 0)
    {
        printf("number is postive ");
        return a;
    }
    else
    {
        printf("number is zero ");
        return a;
    }
}
int main()
{
    int a;
    scanf("%d", &a);
    int max = check_num(a);
    printf("%d", max);
}