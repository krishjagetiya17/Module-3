/*15. Write a C program to determine eligibility for admission to a 
professional course based on the following criteria 
Eligibility Criteria : Marks in Maths >=65 and Marks in Phy >=55 
and Marks in Chem>=50 and Total in all three subject >=190 or 
Total in Maths and Physics >=140 ---- Input the marks obtained 
in 
Physics :65 Input the marks obtained in Chemistry :51 Input the 
marks obtained in Mathematics :72 Total marks of Maths, Physics 
and Chemistry : 188 Total marks of Maths and Physics : 137 The 
candidate is not eligible.*/
#include<stdio.h>
int main()
{
	
	int math,phy,chem,total;
	
	printf("\n\n\t Enter your Maths Marks :");
	scanf("%d",&math);
	printf("\n\n\t Enter your Physics Marks :");
	scanf("%d",&phy);
	printf("\n\n\t Enter your Chemistry Marks :");
	scanf("%d",&chem);
	
	total=math+phy+chem;
	
	if(math>=65 && phy>=55 && chem>=50 && total>=190 && math+phy>=140 )
	{
		printf("\n\n\t-------------------------------------------------------------");
		printf("\n\n\t The Candidate is Eligible....");
		printf("\n\n\t-------------------------------------------------------------");
	}else{
		printf("\n\n\t-------------------------------------------------------------");
		printf("\n\n\t The Candidate is not Eligible....");
		printf("\n\n\t-------------------------------------------------------------");
	};
}
