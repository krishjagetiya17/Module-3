#include<stdio.h>
#include<string.h>

void print_reverse(char *s);
int main()
{
	char s[50];
	printf(" Enter a line to Reverse : ");
	scanf("%s",&s[50]);
	print_reverse(s);
	printf("\n");
}
void print_reverse(char *s)
{
	if(*s!='\0')
	{
	print_reverse(s+1);
	printf("%c",*s);
	}
	printf("\n");		
}

