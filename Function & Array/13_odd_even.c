/* WAP to accept 5 numbers from user and check entered number is even or odd using of array*/
#include<stdio.h>
int main()
{
	int n[5],i;
	printf("\n\n\t Enter Your 5 Number");
	for(i=0;i<5;i++)
	{
		printf("\n\n\t Enter Your Number : ");
		scanf("%d",&n[i]);
	}
	for(i=0;i<5;i++)
	{
		if(n[i]%2==0)
		{
			printf("\n\n\t %d is Even.",n[i]);
		}
		else
		{
			printf("\n\n\t %d is Odd.",n[i]);
		}
			printf("\n\n");
	}	
} 
