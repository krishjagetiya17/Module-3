//34. Accept month number and display month name
#include<stdio.h>
main()
{
	int m;
	
	printf("\n\n\t Enter Your Month Number = ");
	scanf("%d",&m);
	
	switch(m)
	{
		case 1:
			printf("\n\n\t Your Month Name is January");
			break;
		case 2:
			printf("\n\n\t Your Month Name is February");
			break;
		case 3:
			printf("\n\n\t Your Month Name is March");
			break;
		case 4:
			printf("\n\n\t Your Month Name is April");
			break;
		case 5:
			printf("\n\n\t Your Month Name is May");
			break;
		case 6:
			printf("\n\n\t Your Month Name is June");
			break;
		case 7:
			printf("\n\n\t Your Month Name is July");
			break;
		case 8:
			printf("\n\n\t Your Month Name is August");
			break;
		case 9:
			printf("\n\n\t Your Month Name is September");
			break;
		case 10:
			printf("\n\n\t Your Month Name is October");
			break;
		case 11:
			printf("\n\n\t Your Month Name is November");
			break;
		case 12:
			printf("\n\n\t Your Month Name is December");
			break;
		default:
			printf("\n\n\t Your Entered Month Number is Invalid .... Please Try Again with Valid Month Number..");
			break;
	}
	return 0;
}
