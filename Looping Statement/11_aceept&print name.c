//Accept 5 names from user at run time.
#include<stdio.h>
int main()
{
    char n[5][60];
    int i;
    printf("\n\n\t---------------------------Enter The Name-----------------------------------");
    printf("\n\t-----------------------------Once at a time-----------------------------------");
    for(i=0;i<5;i++) 
    {
        printf("\n\n\t Name %d: ", i + 1);
        scanf("%s",&n[i]);
    }
    printf("\n\n\t--------------------------Your Entered Names are--------------------------------");
    for(i=0;i<5;i++)
    {
        printf("\n\n\t %d. %s",i+1,n[i]);
    }
}
