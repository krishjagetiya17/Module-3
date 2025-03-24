//Convert years into days and months
#include<stdio.h>
int main(){
	int d;
	float y,m;
	
	printf("\n\n\t Enter years value :");
	scanf("%f",&y);
	
	m=y*12;
	d=y*365;
	
	printf("\n\n\t Months = %f",m);
	
	printf("\n\n\t Days = %d",d);
	
	printf("\n\n\t Thank you........Visit again");
}
