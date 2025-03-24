// Write a program to make a summation 
#include <stdio.h>
int main() 
{
    int n, i, sum = 0;
    printf("\n\n\t Enter a number: ");
    scanf("%d", &n);
while(n!=0) 
    {
        i=n%10; 
        sum+=i; 
        n=n/10; 
    }
       printf("\n\n\t Summation : %d",sum);
}
