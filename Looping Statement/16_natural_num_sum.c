// Calculate the Sum of Natural Numbers Using the While Loop
#include<stdio.h>
int main()
{
    int i,n,sum=0;
    printf("\n\n\t Enter Natural Number for Sum : ");
    scanf("%d",&n);
    i=1;
    while(i<=n)
    {
        sum=sum+i;
        i++;
    }
    printf("\n\n\t %d",sum);
}
