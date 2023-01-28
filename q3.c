//Write a C program to check whether a number is negative, positive or zero.
#include<stdio.h>
int main()
{

int a;
scanf("%d",&a);
if(a<0){
    printf("number is negative %d",a);
}
else if(a>0){
     printf("number is postive %d",a);
}
else{
     printf("number is zero %d",a);
}
   
}