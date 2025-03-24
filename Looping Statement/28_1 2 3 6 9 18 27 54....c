// Series Program: 1 2 3 6 9 18 27 54...
#include<stdio.h>
int main()
{
	int i,n,a=1,b=2;
	printf("\n\n\t Enter number of N :");
	scanf("%d",&n);
	
	for(i=0;i<=n;i++)
	{
		a=a*3;
		b=b*3;
		printf(" %d %d ",a,b);

		
	}
	
	
}