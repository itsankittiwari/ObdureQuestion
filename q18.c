#include<stdio.h>
int main(){
   int cp,sp;
    scanf("%d%d",&cp,&sp);
    if(cp>sp){
        int loss=cp-sp;
       printf("loss is:%d",loss);
    }
    else {
        int profit=sp-cp;
         printf("profit is:%d",profit);
    }
}