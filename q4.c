// check number is divisble by 5 and 11 or not
#include <stdio.h>
int check_divisible(int a)
{
    if (a % 5 == 0 && a % 11 == 0)
    {
        printf("yes divisible by 11 and 5 ");
        return a;
    }
    else if (a % 5 == 0)
    {
        printf("yes divisible by 5 ");
        return a;
    }
    else if (a % 11 == 0)
    {
        printf("yes divisible by 11 ");
        return a;
    }
    else
    {
        printf("Not divisible by 11 and 5 ");
        return a;
    }
}
int main()
{
    int a;
    scanf("%d", &a);
    int num = check_divisible(a);
    printf("%d",num);
}