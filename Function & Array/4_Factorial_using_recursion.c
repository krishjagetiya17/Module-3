// WAP to find factorial using recursion 
#include<stdio.h>
int fact(int n) 
{
    if(n==0)
        return 1;
    else
        return n*fact(n-1);
}
int main() 
{
    int num;
    printf("\n\n\t Enter Your Factorial Number : ");
    scanf("%d",&num);
    printf("\n\n\t Factorial = %d",fact(num));
}

