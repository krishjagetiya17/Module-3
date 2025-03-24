//WAP to show difference between Structure and Union.
#include<stdio.h>
#include<string.h>
struct stud_personal //Union structure
{
	int rollno;           
	char sname[20];
	char city[20];
	
	struct stud_marksheet
	{
		float per;	
		char grade;
	}SM;
}SP;

int main()
{
	
	SP.rollno=211;
	strcpy(SP.sname,"Krish");
	SP.SM.per=82.69;
	
	printf("\n\n\t Roll No : %d",SP.rollno);
	printf("\n\n\t Name : %s",SP.sname);
	printf("\n\n\t Percentage : %.2f",SP.SM.per); 
		
}
