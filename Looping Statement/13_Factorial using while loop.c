//calculate the Factorial of a Given Number using while loop
#include<stdio.h>
int main()
{
	int i,n=5,f=1;	
	i=1;
	while(i<=n)
	{
		f=f*i;
		printf(" %d",f);
		i++;
	}
	printf("\n\n\t Factorial of %d is %d",n,f);	
}
