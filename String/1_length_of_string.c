//Write a program in C to find the length of a string without using library functions.
#include<stdio.h>
#include<string.h>
int main()
{
	int i,l;
	char str[50];
	
	printf("\n\n\t Enter a value : ");
	scanf("%s",&str);
	
	l=strlen(str);
	printf("\n\n\t Length of String is : %d",l);
}
