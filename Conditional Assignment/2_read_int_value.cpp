//Write a C program to read the value of an integer m and display 
//the value ofn is 1 when m is larger than 0, 0 when m is 0 and -1 
//when m is less than 0

#include<stdio.h>
int main()
{
	int m,n;
	
	printf("\n\n\t Enter The Value of m : ");
	scanf("%d",&m);
	
	if(m>=1){
		printf("\n\n\t Value of n is 1");	
	}
	else if(m==0){
		printf("\n\n\t Value of n is 0");
	}
	else if(m<=-1){
		printf("\n\n\t Value of n is -1");
	}
}
