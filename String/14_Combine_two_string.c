// Write a program in C to combine two strings manually.

#include<stdio.h>
#include<string.h>
main()
{
	char str1[50],str2[50];
	
	printf("\n\n\t Enter Your String 1 : ");
	scanf("%s",&str1);
	printf("\n\n\t Enter Your String 2 : ");
	scanf("%s",&str2);
	
	printf("\n\n\t=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*");
	
	printf("\n\n\t Before Combine Two Strings : %s , %s",str1,str2);
	
	printf("\n\n\t=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*");
	
	printf("\n\n\t After Combine Two Strings : %s",strcat(str1,str2));
	
	printf("\n\n\t=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*");
}
