//Write a program in C to find the maximum number of characters in a string.
#include<stdio.h>
int main()
{
	int i,m=0;
	char str[30];
	
	printf("\n\n\t Enter your String : ");
	scanf("%s",&str);
	
	for(i=0;str[i]!=0;i++)
	{
		m++;
	}
	printf("\n\n\t Maximum Number of the String is : %d",m);
}
