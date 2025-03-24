//Calculate 5 numbers from user and calculate number of even and odd using of while loop
#include<stdio.h>
int main()
{
    int i,n[5],t=0,c=0;//,int,num,total,count

    
    i = 1; 
    while ( i<5)
    {
        printf("\n\t Enert the number :");
        scanf("%d",&i);
          i++;
    }
    while (i<5)
    {
          if(i%2!=0)
             {   
        
             ntf("\n\t Even number :%d ",i);//printting even numbers 
            t++;
             }
       
             
                if(i%2==0)
                        {

                        printf("\n\t ODD number :%d ",i);//printting odd numbers
                        c++;
                        }
    }
    
    
    printf("\n :::::::::::::::::Total ODD And Even Numbers :::::::::::::::::");
    printf("\n\t total count of EVEN numbers :%d",t);//total count of even numbers
    printf("\n\t total count of ODD numbers :%d",c);// total count of odd numbers

}
