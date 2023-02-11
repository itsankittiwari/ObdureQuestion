#include<stdio.h>
void profit_loss(int cp,int sp){
     if(cp>sp){
        int loss=cp-sp;
      printf("loss is:%d",loss);
    }
    else {
        int profit=sp-cp;
         printf("profit is:%d",profit);
    }
}
int main(){
   int cp,sp;
    scanf("%d%d",&cp,&sp);
    profit_loss(cp,sp);
}