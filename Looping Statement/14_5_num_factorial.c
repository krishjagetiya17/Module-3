#include<stdio.h>
int main()
{
	int z[5],i,n,f;
	printf("\n\t********************************************");
	for(i=0;i<5;i++)
    {
		printf("\n\n\t Enter a number to find Factorial: ");
		scanf("%d",&z[i]);
	}

	printf("\n\t********************************************");
	for(i=0;i<5;i++)
    {
		f=1;
			for(n=1;n<=z[i];n++)
				{
					f=(f*n);
				}
			printf("\n\n\t  Factorial of %d is %d",z[i],f);
	}

	printf("\n\t********************************************");
}
