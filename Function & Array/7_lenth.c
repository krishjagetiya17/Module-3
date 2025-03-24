//WAP Find out length of string without using inbuilt function
#include<stdio.h>
int main()
{
     char str[]="Hey There! Its Krish This Side....";
     int l=0;
     while(str[l]!=NULL)
     {
        l++;
     }
     printf("\n\n\t Length of string is : %d ",l);
     
}
