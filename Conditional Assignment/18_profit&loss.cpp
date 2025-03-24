//18.Write a C program to calculate profit and loss on a transaction.
#include<stdio.h>
int main()
{
	
	int sp,cp,p,l;
	
	printf("\n\n\t Enter Cost Price : ");
	scanf("%d",&cp);
	
	printf("\n\n\t Enter Selling Price : ");
	scanf("%d",&sp);
	
	p=sp-cp;
	
	l=cp-sp;
	if(sp>cp){
		printf("\n\n\t Your Profit is %d",p);
	}else if(cp>sp){
		printf("\n\n\t Your Loss is %d",l);
	}else {printf("\n\n\t You have no profit or loss");
	}
	
}
