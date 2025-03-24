// Write a program in C to compare two strings without using string library functions.
#include<stdio.h>
int main()
{
	char str1[25],str2[25];
	int i;
	
	printf("\n\n\t Enter a String 1 : ");
	scanf("%s",str1);
	
	printf("\n\n\t Enter a String 2 : ");
	scanf("%s",str2);
	
	if(str1[i]%str2[i]==0)
	{
		printf("\n\n\t Your Strings are Equal");
	}
	else
	{
		printf("\n\n\t Your Strings are Not Equal");
	}
}
