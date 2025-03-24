//(1*1) + (2*2) + (3*3) + (4*4) + (5*5) + ... + (n*n)
#include<stdio.h>
int main()
{
	int i,n;
	printf("\n\n\t Enter Number for N : ");
	scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
		if(i==n)
        {
			printf("\n ( %d * %d )",i,i);
		}
		else{
			printf("\n ( %d * %d ) + ",i,i);
		}
	}
}
