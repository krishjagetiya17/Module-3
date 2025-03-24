//Write a C program to accept two integers and check whether they are equalor not
#include<stdio.h>
main(){
	int a,b;
	
	printf("\n\n\t Enter your Number-1 : ");
	scanf("%d",&a);
	
	printf("\n\n\t Enter your Number-2 : ");
	scanf("%d",&b);
	
	if(a==b)
	   printf("\n\n\t %d is Equal to %d....",a,b);
	   else{
	   	printf("\n\n\t %d id not Equal to %d....",a,b);
	   }
}
