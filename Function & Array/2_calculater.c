/*WAP of Addition, Subtraction, Multiplication and Division using Switch case.*/
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n1,n2;
    char choice;
    printf("\n\n\t Enter your First Number :");
    scanf("%d",&n1);
    printf("\n\n\t Enter your Second Number :");
    scanf("%d",&n2);
    printf("\n\n\t ------------------------------------------");
    printf("\n\n\t ----------basic Arithmatic-----------");
    printf("\n +. Addition");
    printf("\n -. Subtraction");
    printf("\n *. Multiplication");
    printf("\n /. Division");
    printf("\n E. Exit");
    printf("\n\n\t ------------------------------------------");
    printf("\n\n\t Choose a Arithmatic operator:");
    scanf(" %c",&choice);
    printf("\n\n\t ------------------------------------------");
    
    switch(choice)
    {
        case '+' : printf("\n\t Addition : %d",n1+n2);
                break;
        case '-' : printf("\n\t Subtraction : %d",n1-n2);
                break;
        case '*' : printf("\n\t Multiplication : %d",n1*n2);
                break;
        case '/' : printf("\n\t Division : %d",n1/n2);
                break;
        case 'E' : exit(0);
                break;
        default : printf("\n\t ----------------Invalid Choice----------------");
                break;
    }
    printf("\n\n\t ------------------------------------------");

}
