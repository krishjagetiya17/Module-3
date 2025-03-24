// Write a program in C to separate individual characters from a string.
#include<stdio.h>
int main()
{
	int i;
	char s[50];
	
	printf("\n\n\t Enter Your String Value : ");
	scanf("%s",&s[50]);
	
	printf("\n\n\t-------Individual----------");
	for(i=0;s[i]!=0;i++)
	{
		printf("\n\n\t %c ",s[i]);
	}
}
