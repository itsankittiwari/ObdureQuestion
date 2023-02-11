#include <stdio.h>
void check_number(int a)
{
    if (a % 2 == 0)
    {
        printf("Number is even ");
       
    }
    else
    {
        printf("Number is odd ");
    }
}
int main()
{
    int a;
    scanf("%d", &a);
     check_number(a);
}