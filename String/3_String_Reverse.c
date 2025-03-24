// Write a program in C to print individual characters of a string in reverse order
#include<stdio.h>
int main()
{
	int i,j;
	char string[20];
	
	printf("\n\n\t Enter Your String : ");
	scanf("%s[^\n]",&string[20]);
	
	j=0;
	while(string[j]!=0)
	{
		j++;
	}
	
	printf("\n\n\t -------Reverse--------");
	
	for(i=j-1;i>=0;i--)
	{
		printf("\n\n\t %c ",str[i]);
	}
}
