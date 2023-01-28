/*Write a C program to input electricity unit charges and calculate total electricity bill according to the given condition:
For first 50 units Rs. 0.50/unit
For next 100 units Rs. 0.75/unit
For next 100 units Rs. 1.20/unit
For unit above 250 Rs. 1.50/unit
An additional surcharge of 20% is added to the bill
*/
#include<stdio.h>
int main(){
    int unit,bill;
    scanf("%d",&unit);
    if(unit<=50){
        bill=unit*0.50;
        printf("%d",&bill);
    }
    else if(unit<=150){
         bill=25+(unit-50)*0.75;
        printf("%d",&bill);
    }
    else if(unit<=250){
         bill=100+(unit-150)*1.20;
        printf("%d",&bill);
    }
    else if(unit>250){
         bill=220+(unit-250)*1.50;
        printf("%d",&bill);
    }
    int total=bill/bill*0.20;
    printf("%d",total);
}