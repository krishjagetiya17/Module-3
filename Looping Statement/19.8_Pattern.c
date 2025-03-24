// Pattern=8
#include<stdio.h>
int main()
{
	int r,c,n=1;

	for(r=0;r<10;r++)
	{
		for(c=0;c<10;c++)
		{
			printf(" %d ",n);
			n++;
		}
		printf("\n");	
	}
}
