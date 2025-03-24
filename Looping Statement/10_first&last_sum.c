//Write a program you have to make a summation of first and last Digit.
#include<stdio.h>
int main()
{
    int i,n,sum=0,temp,rem;
    printf("Enter Your Number : ");
    scanf("%d",&n);
    temp=n;
    i=n%10;
    while(n>0)
    {
        rem=n%10;
        n=n/10;
    }
    sum=i+rem;
    printf("\n\n\t summation of %d is : %d",temp,sum);
}
