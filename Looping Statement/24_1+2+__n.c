//1 + 2 + 3 + 4 + 5 + ... + n
#include<stdio.h>
int main()
{
	int i,n;
	printf("\n\n\t Enter Limit of Number : ");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
    {
		if(i==n)
        {
            printf("%d",i);
        }
	    else{
            printf("%d+",i);
        }    
    }
}
