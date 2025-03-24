//31. Write a program in C to read any Month Number in integer and display thenumber of days for this month.
#include<stdio.h>
main()
{
	int m;
	
	printf("\n\n\t=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*");
	printf("\n\n\t Enter Your Months in Digits : ");
	scanf("%d",&m);
	
	printf("\n\n\t=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*");
	
	if(m%2==0){
		printf("\n\n\t Number of Days in your Entered Month are 30");
	}else{
		printf("\n\n\t Number of Days in your Entered Month are 31");
	}
	printf("\n\n\t=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*");
	
	return 0;
}
