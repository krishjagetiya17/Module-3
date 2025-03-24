//Program of Armstrong Number in C Using  for Loop
#include<stdio.h>
int main()
{
    int i,rem,sum=0,temp;
    printf("\n\n\t Enter the number for check armstrong number: ");
    scanf("%d",&i);
    
    for(temp=i;i>0;i=i/10)
    {
        rem=i%10;
        sum=sum+(rem*rem*rem);
    }
    printf("\n\n\t------------------------------------------------");
    if(sum==temp)
    {
        printf("\n\n\t Entered number is an Armstrong number..");
    }
    else
    {
        printf("\n\n\t Entered number is Not an Armstrong number..");
    }
    printf("\n\n\t------------------------------------------------");
}
