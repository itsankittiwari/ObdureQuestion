#include <stdio.h>
void check_triangle(int a,int b,int c){
    if(a==b && b==c ){
       printf("equilateral");
        
    }else if(a==b || b==c || c==a){
        printf("isoscalane");
    }else{
        printf("scalane");
    }
}
int main()
{
    int a, b, c;
    scanf("%d%d%d", &a, &b, &c);
    check_triangle(a,b,c);
}
