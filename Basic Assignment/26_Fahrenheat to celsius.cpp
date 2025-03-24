//Convert temperature Fahrenheit to Celsius
#include<stdio.h>
int main(){
	float F,C;
	
	printf("\n\n\t Enter your Fahrenheit value :");
	scanf("%f",&F);
	
	C=(F-32) * 5/9;
	
	printf("\n\n\t Your Celsius value is : %f C",C);
}
