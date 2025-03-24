// Patterns: 2
#include<stdio.h>
int main()
{
	int r,c;
	char i='A';
	r=1;
	while(r<=5)
	{
		c=1;
		while(c<=r)
		{
			printf("%c ",i);
			i++;
			c++;
		}
		printf("\n");
		r++;
	}
}
