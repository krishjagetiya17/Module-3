//wap for armstrong number --> 0,1,153,370,371,407.
#include<stdio.h>
int main(){
	int n,rem,sum,temp;
	
	printf("\n\n\t Enter your number :");
	scanf("%d",&n);
	temp=n;
	while(n>0){
		rem=n%10;
	sum = sum+(rem*rem*rem);
		n=n/10;
	}printf("%d",sum);
	
	if(sum==temp){
		printf("\n\n\t Entered number is an Armstrong number..",sum);
	}else{
		printf("\n\n\t Entered number is not an Armstrong number..",sum);
	}
}
