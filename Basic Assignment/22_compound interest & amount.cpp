//Calculate compound interest (Compound Interest formula:
//a. Formula to calculate compound interest annually is given by:
//Amount= P(1 + R/100)t
//b. Compound Interest = Amount – P

#include<stdio.h>
int main(){
	int p,Amount;
	float r,t,CI;
	
	printf("\n\n\t Enter your Principal Amount :");
	scanf("%d",&p);
	
	printf("\n\n\t Enter your Rate of interest :");
	scanf("%f",&r);
	
	printf("\n\n\t Enter Number of years :");
	scanf("%f",&t);
	
	Amount = p*(1 + r/100)*t;
	CI= Amount-p;
	
	printf("\n\n\t Your Amount value is %d",Amount);
	
	printf("\n\n\t Your Compound Interest is %f",CI);
	
	
}
