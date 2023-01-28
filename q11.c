#include <stdio.h>
int main()
{
    int b;
    scanf("%d", &b);
    
    if (b == 1)
    {
       printf("Sunday");
    }
    else if (b == 2)
    {
        printf("Monday");
    }
    else if (b == 3)
    {
         printf("Tuesday");
    }
    else if (b == 4)
    {
         printf("Wednesday");
    }
    else if (b == 5)
    {
         printf("Thursday");
    }
    else if (b == 6)
    {
         printf("Friday");
    }
    else if(b==7)
    {
         printf("Saturday");
    }
    else{
        printf("Invalid");
    }
}
