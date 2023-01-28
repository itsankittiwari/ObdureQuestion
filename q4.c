#include<stdio.h>

int main()
{
//check number is divisble by 5 and 11 or not  
int a;
scanf("%d",&a);
if(a%5==0 && a%11==0){
    printf("yes divisible by 11 and 5 %d",a);
}
else if(a%5==0){
     printf("yes divisible by 5 %d",a);
}
else if(a%11==0){
      printf("yes divisible by 11 %d",a);
}
else{
      printf("Not divisible by 11 and 5 %d",a);
}

}