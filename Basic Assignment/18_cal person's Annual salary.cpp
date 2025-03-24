//Calculate person’s Annual salary
#include<stdio.h>
int main(){
	int basic_salary,bonus,Annual_salary;
	float pt;
	
	printf("\n Enter your Basic Salary :");
	scanf("%d",&basic_salary);
	
	printf("\n Enter your Bonus :");
	scanf("%d",&bonus);
	
	pt = basic_salary * 3/100;
	
	printf("\n your pt is %f",pt);
	
	Annual_salary = basic_salary + bonus - pt;
	
	printf("\n your Annual salary is %d ",Annual_salary);
}
