//Palindrome Number
#include<stdio.h>
int main()
{
	int i,temp,n,rem,rev;
	i=0;
	while(i<3)
	{	
        n=0;
        printf("\n\n\t Enter your Number :");
        scanf("%d",&n);
        temp=n;
        rev=0;          
    while(n>0)
    {
        rem=n%10;
        rev=(rev*10)+rem;
        n=n/10;
    }               
    if(rev==temp)
    {
    	printf("\n\n\t is palidrome");
	}
    else{
    	printf("\n\n\t is not palidrome");
        i++;
	}
}
