//WAP to print number in reverse order 
//number = 64728 ---> reverse = 82746
#include<stdio.h>
int main()
{
    int n,rem;
    printf("Enter the number to reverse :");
    scanf("%d",&n);
    while(n>0)
    {
        rem=n%10; 
        printf("%d",rem);
        n=n/10;
        
    }
    
}
