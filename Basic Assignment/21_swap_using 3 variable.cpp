//21. Accept 2 numbers from user and swap 2 numbers with 
//using 3rd variableand without using 3rd variable
#include<stdio.h>
int main()
{
	int a,b,c=0;
	
	printf("\n\n\t Enter the value of a : ");
	scanf("%d",&a);
	printf("\n\n\t Enter the value of b : ");
	scanf("%d",&b);
	
	c=a;
	a=b;
	b=c;
	
	printf("\n\n\t Value of a is : %d",a);
	printf("\n\n\t Value of b is : %d",b);
	
	
	
}
