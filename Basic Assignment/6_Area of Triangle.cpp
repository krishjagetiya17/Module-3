//find area of triangle
#include<stdio.h>
int main(){
	int b,l;
	float A;
	
	printf("\n enter the length:");
	scanf("%d",&l);
	
	printf("\n enter the breadth:");
	scanf("%d",&b);
	
	A= 0.5 * l * b;
	
	printf("\n the area of triangle is:%f",A);
	
}
