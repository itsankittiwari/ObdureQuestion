#include <stdio.h>
int main()
{
    int b;
    scanf("%d", &b);
    //check days according to number

if(b==1){
    printf("No.of the day in January is 31");
}
else if(b==2){
    printf("No.of the day in Feburary is 28");
}
else if(b==3){
    printf("No.of the day in March is 31");
}
else if(b==4){
    printf("No.of the day in April is 30");
}
else if(b==5){
    printf("No.of the day in May is 31");
}
else if(b==6){
    printf("No.of the day in June is 30");
}
else if(b==7){
    printf("No.of the day in July is 31");
}
else if(b==8){
    printf("No.of the day in August is 31");
}
else if(b==9){
    printf("No.of the day in September is 30");
}
else if(b==10){
    printf("No.of the day in October is 31");
}
else if(b==11){
    printf("No.of the day in November is 30");
}
else if(b==12) {
    printf("No.of the day in December is 31");
}
else{
     printf("Invalid");
}
}
