//WAP to accept the height of a person in centimeters and categorize theperson according to their height.
#include<stdio.h>
main(){
	float height;
	
	printf("\n\n\t Enter Your Height (in cm): ");
	scanf("%f",&height);
	
	printf("\n\n\t %f cm",height);
	
	if(height<150){
		printf("\n\n\t According to your Height your category is 'DWARF' ");
	}else if(height>=151 && height<=165){
		printf("\n\n\t According to your Height your category is 'AVERAGE' ");
	}else if(height>=165 && height<=175){
		printf("\n\n\t According to your Height your category is 'TALL' ");
	}else if(height>175){
		printf("\n\n\t According to your Height your category is 'Above Tall' ");
	}
}
