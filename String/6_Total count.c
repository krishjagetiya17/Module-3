// Write a program in C to count the total number of alphabets, digits and special characters in a string.

#include<stdio.h>
int main()
{
	int i,a=0,d,c=0;
	char str[20];
	
	printf("\n\n\t Enter a String : ");
	scanf("%s",&str[i]);
	
	for(i=0;str[i]!=0;i++)
	{
		if((str[i]>='a' && str[i]<='z') || (str[i]>='A' && str[i]<='Z'))
		a++;
		
		else if(str[i]>='0' && str[i]<='9')
		d++;
		
		else
		c++;
	}
	
	printf("\n\n\t Total Number of Alphabets are %d",a);
	printf("\n\n\t Total Number of Digits are %d",d);
	printf("\n\n\t Total Number of Characters are %d",c);
	
}
