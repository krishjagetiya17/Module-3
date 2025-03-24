//Accept 5 numbers from user and perform sum of array
#include<stdio.h>
int main()
{
	int i,n[5],sum=0;
	for(i=1;i<=5;i++)
	{
		printf("\n\n\t Enter your Number[%d] : ",i);
		scanf("%d",&n[i]);
	}
	for(i=1;i<=5;i++)
	{
		printf("\n\n\t Number[%d] : %d",i,n[i]);
		sum=sum+n[i];
	}
	printf("\n\n\t Sum = %d",sum);
}
