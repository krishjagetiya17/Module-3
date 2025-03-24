//Find circumference of Triangle
//C = a + b + c
#include<stdio.h>
int main(){
	int a,b,c;
	float C;
	
	printf("\n enter the first side of Triangle: ");
	scanf("%d",&a);
	
	printf("\n enter the second side of Triangle: ");
	scanf("%d",&b);
	
	printf("\n enter the third side of Triangle: ");
	scanf("%d",&c);
	
	C = a + b + c;
	
	printf("\n The Circumference of Triangle is: %f",C);
}
