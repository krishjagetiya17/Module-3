//Write a program in C to read a sentence and replace lowercase characters with uppercase and vice versa

#include<stdio.h>
#include<string.h>

int main()
{
	char str[50];
	
	printf("\n\n\t Enter Your String in Lowercase : ");
	scanf("%s",&str);
	
	printf("\n\n\t Replace Lowercase Characters with Uppercase : %s",strupr(str));
}
