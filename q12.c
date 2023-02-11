#include<stdio.h>
void printNumberOfDays(int N)
{
  
    switch (N) {
   
    case 1:
        printf("No.of the day in January is 31");
        break;
    case 2:
       printf("No.of the day in Feburary is 28");
        break;
    case 3:
        printf("No.of the day in March is 31");
        break;
    case 4:
        printf("No.of the day in April is 30");
        break;
    case 5:
        printf("No.of the day in May is 31");
        break;
    case 6:
       printf("No.of the day in June is 30");
        break;
    case 7:
        printf("No.of the day in July is 31");
        break; 
    case 8:
      printf("No.of the day in August is 31");
        break;
    case 9:
        printf("No.of the day in September is 30");
        break;  
    case 10:
        printf("No.of the day in October is 31");
        break; 
    case 11:
        printf("No.of the day in November is 30");
        break; 
    case 12:
        printf("No.of the day in December is 31");
        break; 
    default:
        printf("Invalid Month.");
        break;
    }
}
  

int main()
{
    
    int N;
    scanf("%d", &N);
   
    printNumberOfDays(N);
  
    return 0;
}
