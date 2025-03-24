//WAP to check whether a number is negative, positive or zero.
#include<stdio.h>
main(){
	int n;
	
	printf("\n\n\t Enter your Number :");
	scanf("%d",&n);
	
	if(n>0){
		printf("\n\n\t Your Entered number is positive..");
		
	}else if(n<0){
		printf("\n\n\t Your Entered number is negative..");
	}
	else if(n==0){
		printf("\n\n\t Your Entered number is Zero..");
	}
}
