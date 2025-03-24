//Finding odd even numbers,sum of odd even numbers & count of odd even numbers
#include<stdio.h>
int main()
{
    int i,n=10,total=0,h=0,odd=0,even=0;//,int,num,total,count

    
    printf("\n *****************Even Numbers are Here********************");
    for ( i = 0; i < n; i++)
    {
        if(i%2==0)
        {
            even=even+i;
            printf("\n\t Even number :%d ",i);
            total++;
            
        }

    }
    printf("\n ******************Odd Number are Here***********************");
    for ( i = 0; i < n; i++)
    {
        if(i%2!=0)
        {
           odd=odd+i;
            printf("\n\t ODD number :%d ",i);
            h++;
        }

    }
    printf("\n ***************Total Even & Odd Numbers ********************");
    printf("\n\n\t total count of Even Numbers :%d",total);
    printf("\n\n\t total count of Odd Numbers :%d",h);

    printf("\n ******************Total Sum of Even & odd Numbers*********************");
    printf("\n\t Total Sum of Even Numbers : %d",even);
    printf("\n\t Total Sum of Odd Numbers : %d",odd);
    printf("\n****************************************************************************");
}
