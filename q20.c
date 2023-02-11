/*Write a C program to input basic salary of an employee and calculate its Gross salary according to following:
Basic Salary <= 10000 : HRA = 20%, DA = 80%
Basic Salary <= 20000 : HRA = 25%, DA = 90%
Basic Salary > 20000 : HRA = 30%, DA = 95%
*/
#include <stdio.h>
void  gross_salary(int B_S){
    int HRA,DA,G_S;
    if (B_S <= 10000)
    {
        HRA = B_S * 0.20;
        DA = B_S * 0.80;
        G_S = B_S + HRA + DA;
        printf("%d", G_S);
    }
    else if (B_S <= 20000)
    {
        HRA = B_S * 0.25;
        DA = B_S * 0.90;
        G_S = B_S + HRA + DA;
        printf("%d", G_S);
    }
    else
    {
        HRA = B_S * 0.30;
        DA = B_S * 0.95;
        G_S = B_S + HRA + DA;
        printf("%d", G_S);
    }
}
int main()
{
    int B_S;
    scanf("%d", &B_S);
    gross_salary(B_S);
}