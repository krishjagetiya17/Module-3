//Write a C Program to Print the Multiplication Table of N
#include<stdio.h>
int main()
{
    int i,n;
    printf("\n Enter the number for table : ");
    scanf("%d",&n);
    for(i=1;i<=10;i++)
    {
        printf("\n\n\t %d * %d = %d", n,i,n*i);
    }

    
}