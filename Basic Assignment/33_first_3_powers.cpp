//WAP in C Program to Read Integer and Print First Three Powers (N^1, N^2, N^3)
#include<stdio.h>

int main()
{
	int n;
	
	printf("\n\n\t Enter a Number to Find Power : ");
	scanf("%d",&n);
	
	printf("\n\n\t===============================================");
	printf("\n\n\t First three powers of %d is : \n",n);
	printf("\n\t %d^1 = %d\n",n,n);
	printf("\n\t %d^2 = %d\n",n,n*n);
	printf("\n\t %d^3 = %d\n",n,n*n*n);
	printf("\n\t===============================================");
	
}
