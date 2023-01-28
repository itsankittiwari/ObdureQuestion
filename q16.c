#include <stdio.h>
int main()
{
    int a, b, c;
    scanf("%d%d%d", &a, &b, &c);
    if(a==b && b==c ){
       printf("equilateral");
        
    }else if(a==b || b==c || c==a){
        printf("isoscalane");
    }else{
        printf("scalane");
    }
}
