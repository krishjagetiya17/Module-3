// Write a program in C to remove characters from a string except alphabets.

#include<stdio.h>
#include<string.h>
main()
{
	char str[50];
	int i,j;
	
	printf("\n\n\t Enter a String : ");
	scanf("%s",&str);
	
	for(i=0;str[i]!=0;)
	{
		if(!(str[i]>='A' && str[i]<='Z') || (str[i]>='a' && str[i]<='z'))
		{
			for(j=i;str[j]!=0;j++)
			{
				str[j]=str[j+1];
			}
		}
		else
		{
			i++;
		}
	}
	printf("\n\n\t After Removing Non-Alphabetic Characters : %s", str);
}
