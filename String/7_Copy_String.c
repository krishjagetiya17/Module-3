//Write a program in C to copy one string to another string.
#include<stdio.h>
#include<string.h>
int main()
{
	char str1[30],str2[30];
	int i;
	
	printf("\n\n\t Enter a String : ");
	scanf("%s",&str1);
	
	strcpy(str2,str1);
	printf("\n\n\t Copied String : %s",str2);
}
