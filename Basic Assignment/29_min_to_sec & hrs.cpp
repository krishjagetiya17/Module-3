//29.Convert minutes into seconds and hours 
#include<stdio.h>
int main(){
	
	float min,sec,hrs;
	
	printf("\n\n\t Enter Number of Minutes : ");
	scanf("%f",&min);
	
	sec=min*60;
	hrs=min/60;
	
	printf("\n\t---------------------------------------------------------");
	printf("\n\t Your Number of Minutes are : %f",min);
	printf("\n\t Your Number of Seconds are : %f",sec);
	printf("\n\t Your Number of Hours are : %f",hrs);
	printf("\n\t---------------------------------------------------------");
}
