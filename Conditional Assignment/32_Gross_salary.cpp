/*
32. Write a C program to input basic salary of an employee and 
calculate its Gross salary according to following: 
Basic Salary <= 10000 : HRA = 20%, DA 
= 80% Basic Salary <= 20000 : HRA = 
25%, DA = 90% 
Basic Salary > 20000 : HRA = 30%, DA = 95%\
*/
#include<stdio.h>
main()
{
	int b_salary,HRA,DA,g_salary;//basic salary,House Rent Allowance,Dearness Allowance,Gross salary.
	
	printf("\n\n\t=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*");
	
	printf("\n\n\t Enter the Basic salary of Employee = ");
	scanf("%d",&b_salary);
	
	printf("\n\n\t=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*");
	
	if(b_salary<=10000)
	{
	
		HRA=b_salary*0.20; //20%	
		DA=b_salary*0.8;   //80%
		g_salary=b_salary+HRA+DA;
		
		printf("\n\n\t Your Gross Salary is = %d",g_salary);
    }
    else if(b_salary>10000 && b_salary<=20000)
	{
		HRA=b_salary*0.25; //20%	
		DA=b_salary*0.9;   //80%
		g_salary=b_salary+HRA+DA;
		
		printf("\n\n\t Your Gross Salary is = %d",g_salary);
	}
	else
	{
		HRA=b_salary*0.30; //20%	
		DA=b_salary*0.95;   //80%
		g_salary=b_salary+HRA+DA;
		
		printf("\n\n\t Your Gross Salary is = %d",g_salary);
		
	}	  
	
	printf("\n\n\t=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*");
	
	return 0;
}
