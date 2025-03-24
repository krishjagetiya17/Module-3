/* WAP to accept 5 numbers from user and display in reverse order using for loop and array */
#include <stdio.h>

int main() {
    int a[5];
    int i;
    
    printf("\n\n\t Enter 5 numbers:");
    for (i=0;i<5;i++) 
    {
        printf("\n\n\t Enter Number %d: ",i+1);
        scanf("%d",&a[i]);
    }
    printf("\n\n\t Numbers in Reverse Order:");
    for(i=4;i>=0;i--) 
    {
    	printf("\n\n\t %d",a[i]);
    }
}
