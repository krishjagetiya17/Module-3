/*35. Accept the input month number and print number of 
days in that month. */

#include<stdio.h>
main()
{
	int m;
	
	printf("\n\n\t Enter your Month Number = ");
	scanf("%d",&m);
	
	switch(m)
	{
		case 1:
			printf("\n\n\t 31 days");
			break;
		case 2:
			printf("\n\n\t 28 or 29 days");
			break;
		case 3:
			printf("\n\n\t 31 days");
			break;
		case 4:
			printf("\n\n\t 30 days");
			break;
		case 5:
			printf("\n\n\t 31 days");
			break;
		case 6:
			printf("\n\n\t 30 days");
			break;
		case 7:
			printf("\n\n\t 31 days");
			break;
		case 8:
			printf("\n\n\t 31 days");
			break;
		case 9:
			printf("\n\n\t 30 days");
			break;
		case 10:
			printf("\n\n\t 31 days");
			break;
		case 11:
			printf("\n\n\t 30 days");
			break;
		case 12:
			printf("\n\n\t 31 days");
			break;
		default:
			printf("\n\n\t  Input Invalid.... Please Try Again with Valid Month Number From 1 to 12..");
			break;
	}
	return 0;
}
