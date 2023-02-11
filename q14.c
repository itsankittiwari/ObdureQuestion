#include <stdio.h>
void check_triangle(int sum){
    if (sum == 180)
    {
       printf( "triangle is valid");
    }
    else
    {
       printf( "triangle is not valid");
    }
}
int main()
{
    int a, b, c;
    scanf("%d%d%d", &a, &b, &c);
    int sum = a + b + c;
    check_triangle(sum);
}