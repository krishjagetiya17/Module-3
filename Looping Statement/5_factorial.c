/*factorial n*/
#include<stdio.h>

int main(){
	int i,n,fact=1;
	
	printf("\n\n\t Enter your value :");
	scanf("%d",&n);
	
	i=n;
	while(i>=1){
		fact=fact*i;
		i--;
	}
	printf("\n\n\t Your Factorial Value is : %d",fact);
}
