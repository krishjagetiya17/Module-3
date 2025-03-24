//WAP to print table up to given numbers
#include<stdio.h>
int main()
{
    int i,T;
    printf("\n Enter the number for table : ");
    scanf("%d",&T);
    for(i=1;i<=10;i++)
    {
        printf("\n\n\t %d * %d = %d", T,i,T*i);
    }

    
}
