//WAP to check if the given year is a leap year or not.
#include<stdio.h>
main(){
	int n;
	
	printf("\n\n\t Enter number of Years : ");
	scanf("%d",&n);
	
	if(n%4==0)
	   printf("\n\n\t %d is a Leap Year....",n);
	   else
	     printf("\n\n\t %d is not a Leap Year....",n);
}
