//Check Number Is Positive or Negative
#include<stdio.h>
main(){
	int n;
	
	printf("\n\n\t Enter your number : ");
	scanf("%d",&n);
	
	if(n<0){
		printf("\n\n\t Your number is Negative..");
	}else if(n>0){
		printf("\n\n\t Your Number is Positive..");
    }else if(n==0){
    	printf("\n\n\t Your Number is Neutral..");
	}
}
