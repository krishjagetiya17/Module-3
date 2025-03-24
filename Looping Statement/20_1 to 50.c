//WAP program to print below output using for loop 1 to 50
#include<stdio.h>
int main()
{
	int r,c,n=1;
	for(r=0;r<5;r++)
	{
		for(c=0;c<10;c++)
		{
			printf(" %d ",n);
			n++;
		}
		printf("\n");	
	}
}
