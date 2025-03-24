//Calculate compound interest
#include<stdio.h>
int main(){
	int p;
	float r,n,Ci;
	
	printf("\n Enter your Principal amount :");
	scanf("%d",&p);
	
	printf("\n Enter your Rate of interest :");
	scanf("%f",&r);
	
	printf("\n Enter the No of years : 3",n);
	
	Ci = p*(1+(r/3))*(1+(r/3))*(1+(r/3));
	
	printf("\n Your Compound Interest is %f",Ci);
}
