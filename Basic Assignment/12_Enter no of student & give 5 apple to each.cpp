//Accept number of students from user. I need to give 5 apples to eachstudent. How many apples are require
#include<stdio.h>
int main(){
	int x,no_of_apple;
	
	printf("\n enter the number of students :");
	scanf("%d",&x);
	
	no_of_apple = x * 5;
	printf("\n number of apple required is : %d",no_of_apple);
	
}
