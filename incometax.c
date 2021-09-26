#include<stdio.h>

int main() 
{
 float tax = 0, income;


 printf("Enter Your Income\n");
 scanf("%f", &income);

 if (income>=100000 && income<=500000);

 {
    tax= tax+ .05 * (income - 100000);
 }
 if (income>=500000 && income<=1000000);

 {
    tax= tax+ .10 * (income - 500000);
 }
 if (income>=1000000 && income<=1500000);

 {
    tax= tax+ .20 * (income - 1500000);
 }
 printf(" Your net monthly income tax amount is %f", tax);
return 0;
}