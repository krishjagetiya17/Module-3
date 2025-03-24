//WAP to accept 5 numbers from user and display all numbers
#include<stdio.h>
int main()
{
    int i,n;
    
    	printf("Enter Five number : ");
        scanf("%d %d %d %d %d",&n,&n,&n,&n,&n);
	
    
    for(i=1;i<=n;i++)
    {
        printf("\n\t %d",i);
    }
}
