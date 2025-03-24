//ii. Vowel or Consonant using switch case
#include<stdio.h>
main()
{

	char c;
	printf("\n\n\t ----------------------------------------------------");
	printf("\n\n\t Enter The Character : ");
	scanf("%c",&c);
	printf("\n\n\t ----------------------------------------------------");
	
	switch(c)
	{
		case 'a' :	printf("\n\n\t Your Character is a vowel");
					break;
		case 'e' :	printf("\n\n\t Your character is a vowel");
					break;
		case 'i' :	printf("\n\n\t Your character is a vowel");
					break;
		case 'o' :	printf("\n\n\t Your character is a vowel");
					break;
		case 'u' :	printf("\n\n\t Your character is a vowel");
					break;
		case 'A' :	printf("\n\n\t Your character is a vowel");
					break;
		case 'E' :	printf("\n\n\t Your character is a vowel");
					break;
		case 'I' :	printf("\n\n\t Your character is a vowel");
					break;
		case 'O' :	printf("\n\n\t Your character is a vowel");
					break;
		case 'U' :  printf("\n\n\t Your character is a vowel");
					break;
					
		default  : 	printf("\n\n\t Your Entered Character is a Consonant");
					break;
	}
	printf("\n\n\t ----------------------------------------------------");
	return 0;
}
