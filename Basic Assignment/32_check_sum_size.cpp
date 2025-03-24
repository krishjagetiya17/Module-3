//32. Accept 2 numbers and find out its sum check it size
#include<stdio.h>
main()
{
	int a,b,c;
	
	printf("\n\n\t Enter Your First Number : ");
	scanf("%d",&a);
	
	printf("\n\n\t Enter Your Second Number : ");
	scanf("%d",&b);
	
	c=a+b;
	
	printf("\n\n\t c=%d",c);
	
	printf("\n\n\t Size of Your Sum is = %d",sizeof(c));
	
	
}
