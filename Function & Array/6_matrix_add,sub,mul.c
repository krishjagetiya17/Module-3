//WAP to make addition, Subtraction and multiplication of two matrix using 2-D Array
#include<stdio.h>
main(){
	int A[3][3],B[3][3],r,c;
	
	printf("\n\n\t ----------Matrix=1--------------");
	for(r=0;r<3;r++){
	    for(c=0;c<3;c++){
	    	printf("\n\n\t Enter your First Matrix elements [%d][%d] :",r,c);
	    	scanf(" %d",&A[r][c]);
		}
	}
	printf("\n\n\t ----------Matrix=2--------------");
	for(r=0;r<3;r++){
	    for(c=0;c<3;c++){
	    	printf("\n\n\t Enter your Second Matrix elements [%d][%d] :",r,c);
	    	scanf(" %d",&B[r][c]);
		}
	}
	printf("\n\n\t ----------Matrix=1--------------\n\n");
    for(r=0;r<3;r++){
	    for(c=0;c<3;c++){
	    	printf(" %d",A[r][c]);
	    	
		}printf("\n");
	}
	
	printf("\n\n\t ----------Matrix=2--------------\n\n");
    for(r=0;r<3;r++){
	    for(c=0;c<3;c++){
	    	printf(" %d",B[r][c]);
	    	
		}printf("\n");
	}
	
	printf("\n\n\t --------ADDITION-------------\n\n");
	for(r=0;r<3;r++){
	    for(c=0;c<3;c++){
	    	printf(" %d",A[r][c]+B[r][c]);
	    	
		}printf("\n");
	}
	
	printf("\n\n\t ---------SUBSTRACTION---------------\n\n");
	for(r=0;r<3;r++){
		for(c=0;c<3;c++){
			printf(" %d",A[r][c]-B[r][c]);
		}printf("\n");
	}
	
	printf("\n\n\t ---------MULTIPLICATION---------------\n\n");
	for(r=0;r<3;r++){
		for(c=0;c<3;c++){
			printf(" %d",A[r][c]*B[r][c]);
		}printf("\n");
	}
}
