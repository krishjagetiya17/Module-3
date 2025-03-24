//Write a program to find out the maximum number
#include<stdio.h>
int main()
{
    int i,n,j=0,rem;
    printf("enter your number : ");
    scanf("%d",&n);
    i=n;
    while(n>0)
    {
        rem=n%10; 
        if(rem>j)
        {
            j=rem;
        }
        n=n/10;

    }
    printf("\n\n\t Maximum Number form given number : %d",j);
}
