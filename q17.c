#include <stdio.h>
#include<math.h>
int main()
{
    int a, b, c,d;
    scanf("%d%d%d", &a, &b, &c);
     d=b*b-4*a*c;
     int x;
     int y;
     if(d>0){
          x=(-b-(sqrt(d))/(2*a)); 
          y=(-b+(sqrt(d))/(2*a));
          printf("x %d",x);
          printf("y %d",y);
     }
     else if(d==0){
         x=-b/(2*a); 
        printf("number is real and same%d",x);
     }
    else{
        int real=-b/2*a;
        int imaginary=(sqrt(-d))/(2*a);
        printf("number is complex and different %d%d",real,imaginary);
    }
}
