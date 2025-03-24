//find the area of a rectangular prism
//A = 2(wl+hl+hw)
#include<stdio.h>
int main(){
    int w,l,h;
    float A;
	
	printf("\n Enter the Width: ");
	scanf("%d",&w);
	
	printf("\n Enter the Length: ");
	scanf("%d",&l);
	
	printf("\n Enter the Height: ");
	scanf("%d",&h);
	
	A = 2 * (w * l + h * l + h * w);
	
	printf("\n Area of Rectangular Prism is: %f",A);
}
