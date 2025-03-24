/*WAP to convert years into days and days into years*/
#include<stdio.h>
int main(){
	float a,ans,choice;
	
	printf("----------menu----------");
	printf("\n\n\t Years into Days (1)");
	printf("\n\n\t Days into Years (2)");
	
	printf("\n\n\t Enter your choice :");
	scanf("%f",&choice);
	
	printf("\n\n\t Enter your value :");
	scanf("%f",&a);
	
	if(choice=1){
		ans=a*365;
	}else if(choice=2){
		ans=a/365;
	}else{
		printf("\n\n\t wrong choice ....enter valid choice");
	}
	printf("\n\n\t your answer is %f",ans);
	
}
