#include <stdio.h>
int main()
{
    int sum;
    scanf("%d", &sum);
    while (sum != 0)
    {
        if (sum >= 2000)
        {
            int count_2000 = sum / 2000;
            sum %= 2000;
            printf("No of the two thousand note is :%d", count_2000);
            continue;
        }
        if (sum >= 500)
        {
            int count_500 = sum / 500;
            sum %= 500;
            printf("No of the five hundreadnote is :%d", count_500);
            continue;
        }
        if (sum >= 200)
        {
            int count_200 = sum / 200;
            sum %= 200;
            printf("No of the two hundread note is :%d", count_200);
            continue;
        }
        if (sum >= 100)
        {
            int count_100 = sum / 100;
            sum %= 100;
            printf("No of the hundread note is :%d", count_100);
            continue;
        }
        if (sum >= 50)
        {
            int count_50 = sum / 50;
            sum %= 50;
            printf("No of the fifty note is :%d", count_50);
            continue;
        }
        if (sum >= 20)
        {
            int count_20 = sum / 20;
            sum %= 20;
            printf("No of the twenty note is :%d\n", count_20);
            continue;
        }
        if (sum >= 10)
        {
            int count_10 = sum / 10;
            sum %= 10;
            printf("No of the ten note is :%d", count_10);
            continue;
        }
        if (sum >= 5)
        {
            int count_5 = sum / 5;
            sum %= 5;
            printf("No of the five note is :%d", count_5);
            continue;
        }
        if (sum >= 2)
        {
            int count_2 = sum / 2;
            sum %= 2;
            printf("No of the two note is :%d", count_2);
            continue;
        }
        if (sum == 1)
        {
            printf("No of the one  note is 1");
            break;
        }
        return 0;
    }
}
