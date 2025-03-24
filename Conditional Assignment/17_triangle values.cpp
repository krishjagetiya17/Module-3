//17.Write a C program to check whether a triangle can be formed 
//with the givenvalues for the angles.

#include<stdio.h>
int main()
{
	int a,b,c,total;
	
	printf("\n\n\t Enter your First Angle : ");
	scanf("%d",&a);
	printf("\n\n\t Enter your Second Angle : ");
	scanf("%d",&b);
	printf("\n\n\t Enter your Third Angle : ");
	scanf("%d",&c);
	
	total=a+b+c;
	
	if(total==180){
		printf("\n-----------------------------------------------");
		printf("\n\n\t Your Values are qualified to make Triangle");
		printf("\n-----------------------------------------------");
	}else{
		printf("\n-----------------------------------------------");
		printf("\n\n\t Your Values are Not qualified to make Triangle");
		printf("\n-----------------------------------------------");
	}
}
