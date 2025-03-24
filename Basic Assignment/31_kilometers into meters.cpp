/*Convert kilometers into meters*/
#include<stdio.h>
int main(){
	int m;
	float kg;
	
	printf("\n\n\t Enter your Kilometer value :");
	scanf("%f",&kg);
	
	m = 1000 * kg;
	
	printf("\n\n\t Your Answer is : %d meter",m); 
}
