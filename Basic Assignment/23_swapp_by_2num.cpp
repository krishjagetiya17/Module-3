//23. WAP to calculate swap 2 numbers with using of multiplication and division.
#include<stdio.h>

int main()
{
    int a,b;
    printf("\n\n\t Enter Your First Value :");
    scanf("\n\n\t %d",&a);
    printf("\n\n\t Enter Your Second Value :");
    scanf("\n\n\t %d",&b);
    printf("\n\n\t /*/*/*/*/*/*/*/*/ Before Swapping /*/*/*/*/*/*/*/*/ \n");
    printf("-----------------------------------------------------------\n");
    printf("\n a=%d",a);
    printf("\n b=%d",b);
    a=a*b;
    b=a/b;
    a=a/b;
    printf("\n-----------------------------------------------------------\n");
    printf("\n\n\t /*/*/*/*/*/*/*/*/ After Swapping /*/*/*/*/*/*/*/*/ \n");
    printf("-----------------------------------------------------------\n");
    printf("\n a=%d",a);
    printf("\n b=%d",b);
   printf("\n-----------------------------------------------------------\n");
}
