//Store 5 numbers in array and sort it in ascending order
#include<stdio.h>
int main()
{
	int i,j,n[5],temp;
	
	for(i=0;i<5;i++)
	{
		printf("\n\n\t Enter your Number [%d] : ",i);
		scanf("%d",&n[i]);
	}
	for(i=0;i<5;i++) 
	{
        for(j=0;j<5-i-1;j++)
		{
            if(n[j]>n[j+1])
			{
                temp=n[j];
                n[j]=n[j+1];
                n[j+1]=temp;
            }
        }
    }
    printf("\n\n\t Numbers in Ascending Order: ");
    for(i=0;i<5;i++) 
	{
        printf("\n\n\t Number[%d] : %d ",i,n[i]);
    }
}
