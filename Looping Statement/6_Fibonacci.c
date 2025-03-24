//FIBONACCI series
#include<stdio.h>
int main(){
	//0 1 1 2 3 5 8 ...n
	int n,a,b,i=1,c;
	
	printf("\n\n\t Enter your limit :");
	scanf("%d",&n);
	while(i<=n){
		printf("%d ",a);
		c=a+b;
		a=b;
		b=c;
		i++;
	}
}
