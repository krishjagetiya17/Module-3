//Write a program to make Simple calculator
//addition
//subtraction
//multiplication
//division

#include<stdio.h>
 int main()
{
    int a,b,ca,cs,cm;
    float cd;
    printf("enter your first value:");
    scanf("%d",&a);
    
   // printf("enter the sign ( +, -, *, / ):");
   // scanf(" %c",&sign);
    
    printf("enter your second value:");
    scanf("%d",&b);
    
    ca=a + b;
    cs=a - b;
    cm=a * b;
    cd=a / b;
    
    printf("\n the sum of your value is: %d",ca);
    
    printf("\n the subtraction of your value is: %d",cs);
    
    printf("\n the multiplicatiom of your value is: %d",cm);
    
    printf("\n the division of your value is: %f",cd);
}
