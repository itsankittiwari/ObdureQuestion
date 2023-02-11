 // leap year or not
#include <stdio.h>
int check_leapyear(int a){
if (a % 4 == 0 || a % 400 == 0)
    {
        printf("leap year");
        return a;
    }
    else if (a % 100 == 0)
    {
        printf("Not leap year ");
        return a;
    }
    else
    {
        printf("Not leap year ");
        return a;
    }
}
int main()
{
    int a;
    scanf("%d", &a);
    int num =check_leapyear(a);
    printf("%d",num);
}