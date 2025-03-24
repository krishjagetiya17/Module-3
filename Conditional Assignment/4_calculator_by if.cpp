//WAP to make simple calculator 
#include<stdio.h>
main(){
	int a,b,choice;
	
	printf("\n\n\t------------------MENU--------------------");
	printf("\n\n\t---------------------------------------------");
	printf("\n\n\t ADDITION (+)");
	printf("\n\n\t SUBSTRACTION (-)");
	printf("\n\n\t MULTIPLICATION (*)");
	printf("\n\n\t DIVISION (/)");
	printf("\n\n\t----------------------------------------------");
	printf("\n\n\t Enter your First value : ");
	scanf("%d",&a);
	
	printf("\n\n\t Enter your Choice : ");
	scanf("%d",&choice);
	printf("\n\n\t Enter your Second value : ");
	scanf("%d",&b);
	
	if(choice=='+'){
		printf("\n\n\t ADDITION = %d",a+b);
	}
	if(choice=='-'){
		printf("\n\n\t SUBSTRATION = %d",a-b);
	}
	if(choice=='*'){
		printf("\n\n\t MULTIPLICATION = %d",a*b);
	}
	if(choice=='/'){
		printf("\n\n\t DIVISION = %d",a/b);
	}
	
	
	printf("\n\n\t Thank You..........Visit Again....");
	
	
}
