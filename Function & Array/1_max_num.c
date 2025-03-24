// Write a program to find out the max number from given array using function
#include<stdio.h>
int main()
{
    int arr[5],i,max;
    for(i=0;i<5;i++)
    {
        printf("\n\t Enter the Array Element : ");
        scanf("%d",&arr[i]);
    }
    
    printf("\n\n\t ---------------- Maximum Element ----------------");
    max=arr[0];
    for(i=0;i<5;i++)
    {
        if(arr[i]>max)
        {
            max=arr[i];
        }  
    }   
    printf("\n\n\t Maximum element from the Array is : %d",max);
}
