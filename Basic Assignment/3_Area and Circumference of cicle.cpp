//Find Area And Circumference of Circle
//area= pi*r*r , circumference= 2*pi* r
#include<stdio.h>
#define pi 3.14
int main(){
	double A,C,r;
	
	printf("enter the radius of circle:");
	scanf("%lf",&r);
	
	A = pi * r * r;
	C = 2 * pi * r;
	
	printf("\n Area of circle is: %lf",A);
	printf("\n Circumference of circle is: %lf",C);
}
