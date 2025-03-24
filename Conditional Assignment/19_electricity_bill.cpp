//19. Write a program in C to calculate and print the electricity bill of a 
//given customer. The customer ID, name, and unit consumed by 
//the user should be captured from the keyboard to display the 
//total amount to be paid to the customer. The charge are as follow 
//20. Unit 
//21. Charge/unit 
//22. upto 350 
//23. @1.20 
//24. 350 and above but less than 600 
//25. @1.50 
//26. 600 and above but less than 800 
//27. @1.80 
//28. 800 and above 
//29. @2.00 

#include<stdio.h>
int main()
{
	float unit;
	
	printf("\n\n\t Please Enter your Units :");
	scanf("%f",&unit);
	
	if(unit>0 && unit<350){
		printf("\n\n\t Dear Customer Your Electricity Bill Amount is : %.2f",unit*1.2);
	}else if(unit>=350 && unit<600){
		printf("\n\n\t Dear Customer Your Electricity Bill Amount is : %.2f",unit*1.5);
	}else if(unit>=600 && unit<800){
		printf("\n\n\t Dear Customer Your Electricity Bill Amount is : %.2f",unit*1.8);
	}else if(unit>=800){
		printf("\n\n\t Dear Customer Your Electricity Bill Amount is : %.2f",unit*2);
	}
	printf("\n\n\t Thank you.-.-.-.-.-.Visit Again....");
}
