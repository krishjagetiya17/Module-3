/*37. WAP to show
i. Monday to Sunday using switch case
ii. Vowel or Consonant using switch case
*/
 //i. Monday to Sunday using switch case
#include<stdio.h>
main()
{
	printf("\n\n\t -------------------------------1st question------------------------------");
	int n;
	printf("\n\n\t Enter any Number Between 1 to 7 :  ");
	scanf("%d",&n);
	
	switch(n)
	{
		case 1 :
				printf("\n\n\t Monday");
				break;
		case 2 :
				printf("\n\n\t Tuesday");
				break;
		case 3 :
				printf("\n\n\t Wednesday");
				break;
		case 4 :
				printf("\n\n\t Thrusday");
				break;
		case 5 :
				printf("\n\n\t Friday");
				break;
		case 6 :
				printf("\n\n\t Saturday");
				break;
		case 7 :
				printf("\n\n\t Sunday");
				break;
		default :
				printf("\n\n\t Invalid Number ..... Please Try Again ");
				break;
	}

  return 0;

}
