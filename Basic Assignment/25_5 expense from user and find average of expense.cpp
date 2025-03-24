//Accept 5 expense from user and find average of expense
#include<stdio.h>
int main(){
	int a,b,c,d,e;
	float avg;
	
	printf("\n\n\t Enter your First expense :");
	scanf("%d",&a);
	
	printf("\n\n\t Enter your Second expense :");
	scanf("%d",&b);
	
	printf("\n\n\t Enter your Third expense :");
	scanf("%d",&c);
	
	printf("\n\n\t Enter your Fourth expense :");
	scanf("%d",&d);
	
	printf("\n\n\t Enter your Fifth expense :");
	scanf("%d",&e);
	
	avg = (a+b+c+d+e)/5;
	
	printf("\n\n\t Your Average value is :%f Rupees",avg);
}
