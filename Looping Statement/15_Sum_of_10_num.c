//15.Calculate sum of 10 numbers using of while loop
#include<stdio.h>
int main()
{
	int i,sum=0;	
	i=1; 
	
	while(i<=10)  
	{
		sum=sum+i;
		printf("\n\n\t Sum = %d",sum);
		i=i+1;		  
	}	
	printf("\n\n\t Total Sum of 1 to 10  = %d",sum);
}
