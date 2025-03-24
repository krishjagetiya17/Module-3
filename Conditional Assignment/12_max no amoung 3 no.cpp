#include<stdio.h>
int main(){
	int a,b,c;
	
	printf("\n\n\t Enter your first number :");
	scanf("%d",&a);
	
	printf("\n\n\t Enter your second number :");
	scanf("%d",&b);
	
	printf("\n\n\t Enter your Third number :");
	scanf("%d",&c);
	
(a>b && a>c)?(printf("\n\n\t %d is maximum",a)):(printf("\n\n\t %d is maximum",b));
(b>a && b>c)?(printf("\n\n\t %d is maximum",b)):(printf("\n\n\t %d is maximum",a));
(c>a && c>b)?(printf("\n\n\t %d is maximum",c)):(printf("\n\n\t %d is maximum",a));
}
