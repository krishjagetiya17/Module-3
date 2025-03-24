//Calculate person’s insurance premium based on salary
#include<stdio.h>
int main(){
	int salary;
	float premium;
	
	printf("\n enter your salary :");
	scanf("%d",&salary);
	
	printf("your monthly premium should be 10 percent of your monthly salary");
	premium = salary * 10/100;
	printf("\n your monthly premium is %f",premium);
}
