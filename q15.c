#include <stdio.h>
void check_triangle(int a,int b,int c){
 if ((a + b) > c && ((b + c) > a) && ((c + a) > b))
    {
        printf("triangle is valid");
    }
    else
    {
        printf("triangle is not valid");
    }
}
int main()
{
    int a, b, c;
    scanf("%d%d%d", &a, &b, &c);
    check_triangle(a,b,c);
}