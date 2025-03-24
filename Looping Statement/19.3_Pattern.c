//Patterns=3
#include<stdio.h>
int main()
{
	int r,c;
	r=1;
	while(r<=5)
	{
		c=1;
		char i='A';
		while(c<=r)
		{
		  printf("%c ",i);
			c++;
			i++;	
		}
		printf("\n");
		r++;
	}
}
