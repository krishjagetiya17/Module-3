//Accept marks from user and check pass or fail
#include<stdio.h>
main(){
	float sub1,sub2,sub3,sub4,sub5,sub6,per;
	
	printf("\n\n\t Enter your Marks of Subject-1 : ");
	scanf("%f",&sub1);
	printf("\n\n\t Enter your Marks of Subject-2 : ");
	scanf("%f",&sub2);
	printf("\n\n\t Enter your Marks of Subject-3 : ");
	scanf("%f",&sub3);
	printf("\n\n\t Enter your Marks of Subject-4 : ");
	scanf("%f",&sub4);
	printf("\n\n\t Enter your Marks of Subject-5 : ");
	scanf("%f",&sub5);
	printf("\n\n\t Enter your Marks of Subject-6 : ");
	scanf("%f",&sub6);
	
	per=((sub1+sub2+sub3+sub4+sub5+sub6)/600)*100;
	
	printf("\n\n\t Your Percentage is : %f ",per);
	
	if(per>=33){
		printf("\n\n\t You are Pass..");
	}else{
		printf("\n\n\t You are Fail..");
	}
	
}
